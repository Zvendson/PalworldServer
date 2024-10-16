#pragma once

#define SPDLOG_LEVEL_NAMES { "TRACE", "DEBUG", "INFO", "WARN", "ERROR", "CRITICAL", "OFF" }

#include <spdlog/spdlog.h>
#include <spdlog/fmt/bundled/core.h>


namespace Pal
{
    class Logger
    {
    public: /* Factory */
        enum class Level { Trace, Debug, Info, Warn, Error, Critical, Off };

        //
        static Logger& GetLogger(const std::string& pluginName);

    public: /* Methods */
        //
        [[nodiscard]] static bool IsHeadless();

        //
        void SetLevel(Level);

        //
        [[nodiscard]] inline Level GetLevel() { return s_Level; }

        template <typename T>
        inline void Trace(const T &msg)
        {
            Update();
            s_spdLogger->trace(msg);
        }

        template<typename... Args>
        void Trace(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->trace(format, std::forward<Args>(args)...);
        }



        template <typename T>
        inline void Debug(const T &msg)
        {
            Update();
            s_spdLogger->debug(msg);
        }

        template<typename... Args>
        inline void Debug(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->debug(format, std::forward<Args>(args)...);
        }



        template <typename T>
        inline void Info(const T &msg)
        {
            Update();
            s_spdLogger->info(msg);
        }

        template<typename... Args>
        inline void Info(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->info(format, std::forward<Args>(args)...);
        }



        template <typename T>
        inline void Warn(const T &msg)
        {
            Update();
            s_spdLogger->warn(msg);
        }

        template<typename... Args>
        inline void Warn(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->warn(format, std::forward<Args>(args)...);
        }



        template <typename T>
        inline void Error(const T &msg)
        {
            Update();
            s_spdLogger->error(msg);
        }

        template<typename... Args>
        inline void Error(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->error(format, std::forward<Args>(args)...);
        }



        template <typename T>
        inline void Critical(const T &msg)
        {
            Update();
            s_spdLogger->critical(msg);
        }

        template<typename... Args>
        inline void Critical(spdlog::format_string_t<Args...> format, Args&&... args)
        {
            Update();
            s_spdLogger->critical(format, std::forward<Args>(args)...);
        }

    private:
        void Update();

    private: /* Constructors */
        Logger(const std::string& pluginName);

        Logger()                         = delete;
        Logger(const Logger&)            = delete;
        Logger& operator=(const Logger&) = delete;
        Logger(Logger&&)                 = delete;
        Logger& operator=(Logger&&)      = delete;

    private: /* members */
        //
        std::string m_PluginName;

        //
        std::vector<spdlog::sink_ptr> m_Sinks;

    private: /* static members */
        inline static Level s_Level = Level::Info;
        inline static std::shared_ptr<spdlog::logger> s_spdLogger;
        inline static std::shared_ptr<Logger> s_CoreLogger;
        inline static std::vector<std::shared_ptr<Logger>> s_Loggers;
    };
}