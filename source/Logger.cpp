// Credits: https://gitlab.lrz.de/IP/elsa/-/blob/master/elsa/logging/Logger.cpp

#include "PalManager/Logger.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/dist_sink.h>
#include <spdlog/sinks/ostream_sink.h>
#include <spdlog/sinks/daily_file_sink.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <iostream>


#define FOREGROUND_WHITE  (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define FOREGROUND_YELLOW (FOREGROUND_RED | FOREGROUND_GREEN)
#define FOREGROUND_CYAN   (FOREGROUND_GREEN | FOREGROUND_BLUE)



namespace
{
    constexpr spdlog::level::level_enum convert_level_to_spdlog(Pal::Logger::Level level)
    {
        switch (level)
        {
            case Pal::Logger::Level::Trace:
                return spdlog::level::trace;

            case Pal::Logger::Level::Debug:
                return spdlog::level::debug;

            case Pal::Logger::Level::Info:
                return spdlog::level::info;

            case Pal::Logger::Level::Warn:
                return spdlog::level::warn;

            case Pal::Logger::Level::Error:
                return spdlog::level::err;

            case Pal::Logger::Level::Critical:
                return spdlog::level::critical;

            case Pal::Logger::Level::Off:
                return spdlog::level::off;

            default:
                return spdlog::level::info;
        }
    }

    class PluginNameFormatter : public spdlog::custom_flag_formatter
    {
    public:
        void format(const spdlog::details::log_msg& msg, const std::tm&, spdlog::memory_buf_t& dest) override
        {
            if (s_PluginNameRef)
                dest.append(s_PluginNameRef->data(), s_PluginNameRef->data() + s_PluginNameRef->size());
        }

        std::unique_ptr<custom_flag_formatter> clone() const override
        {
            return std::make_unique<PluginNameFormatter>();
        }

        static void SetPluginName(const std::string* plugin_name)
        {
            s_PluginNameRef = plugin_name;
        }

        inline static const std::string* s_PluginNameRef = nullptr;
    };


}



namespace Pal
{
    Logger& Logger::GetLogger(const std::string& pluginName)
    {
        for (const auto& logger : s_Loggers)
        {
            if (logger->m_PluginName == pluginName)
                return *logger;
        }

        std::shared_ptr<Logger> newLogger(new Logger(pluginName));
        s_Loggers.push_back(newLogger);
        return *newLogger;
    }



    bool Logger::IsHeadless()
    {
        return true;
        static bool headless = GetModuleHandle(L"PalServer-Win64-Shipping.exe") != nullptr;
        return headless;
    }



    void Logger::SetLevel(Level level)
    {
        s_Level = level;
        s_spdLogger->set_level(convert_level_to_spdlog(level));
    }



    void Logger::Update()
    {
        PluginNameFormatter::s_PluginNameRef = &m_PluginName;
    }

    Logger::Logger(const std::string& pluginName) : m_PluginName(pluginName)
    {
        if (!s_spdLogger)
        {
            std::vector<spdlog::sink_ptr> sinks;

            if (IsHeadless())
            {
                auto consoleFormatter = std::make_unique<spdlog::pattern_formatter>();
                consoleFormatter->add_flag<PluginNameFormatter>('P');
                consoleFormatter->set_pattern("[%T] [%P] [%^%l%$] %v"); // TODO add config format

                auto consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
#if _DEBUG
                consoleSink->set_level(spdlog::level::level_enum::debug);
#else
                consoleSink->set_level(spdlog::level::level_enum::info);
#endif
                consoleSink->set_color(spdlog::level::level_enum::trace, FOREGROUND_CYAN | FOREGROUND_INTENSITY);
                consoleSink->set_color(spdlog::level::level_enum::debug, FOREGROUND_CYAN);
                consoleSink->set_color(spdlog::level::level_enum::info, FOREGROUND_GREEN);
                consoleSink->set_color(spdlog::level::level_enum::warn, FOREGROUND_YELLOW | FOREGROUND_INTENSITY);
                consoleSink->set_color(spdlog::level::level_enum::err, FOREGROUND_RED | FOREGROUND_INTENSITY);
                consoleSink->set_color(spdlog::level::level_enum::critical, FOREGROUND_WHITE | BACKGROUND_RED | FOREGROUND_INTENSITY);

                consoleSink->set_formatter(std::move(consoleFormatter));

                sinks.push_back(consoleSink);
            }


            try
            {
                std::time_t time = std::time(nullptr);
                struct tm timeinfo;
                localtime_s(&timeinfo, &time);

                // TODO add GetRootPath function
                // TODO create path to logfile
                // TODO move to Core?
                std::ostringstream oss;
                oss << "PalManager/Logs/" << std::put_time(&timeinfo, "%d-%m-%Y_%H.%M.%S") << ".log";

                auto fileFormatter = std::make_unique<spdlog::pattern_formatter>();
                fileFormatter->add_flag<PluginNameFormatter>('P');
                fileFormatter->set_pattern("[%T] [%P] [%l] %v"); // TODO add config format

                auto rotatingSink = std::make_shared<spdlog::sinks::rotating_file_sink_mt>(oss.str(), 10 * 1024 * 1024, 3);
                rotatingSink->set_formatter(std::move(fileFormatter));
                rotatingSink->set_level(spdlog::level::level_enum::debug);
                sinks.push_back(rotatingSink);


                s_spdLogger = std::make_shared<spdlog::logger>("PalManager", sinks.begin(), sinks.end());
#if _DEBUG
                s_spdLogger->set_level(spdlog::level::debug);
                s_spdLogger->flush_on(spdlog::level::debug);
#else
                s_spdLogger->set_level(spdlog::level::info);
                s_spdLogger->flush_on(spdlog::level::info);
#endif
                spdlog::set_default_logger(s_spdLogger);
            }
            catch (const spdlog::spdlog_ex& ex)
            {
                std::cerr << "spdlog initialization failed: " << ex.what() << "\n";
            }
        }
    }

}


#undef FOREGROUND_WHITE
#undef FOREGROUND_YELLOW
#undef FOREGROUND_CYAN