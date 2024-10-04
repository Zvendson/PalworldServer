#pragma once
#include <chrono>



/**
* @brief A simple stopwatch class for measuring elapsed time.
* 
* @author Zvendson
* 
* This class uses the `std::chrono::high_resolution_clock` to track time. It allows for measuring 
* the elapsed time since the stopwatch was started or restarted and checks if a specified duration
* has expired. The time can be retrieved in both seconds and milliseconds.
* 
* The precision of `std::chrono::high_resolution_clock` may vary depending on the platform. 
* It is designed to provide the highest resolution available on the system.
* 
* Stopwatch sw(5.0); // Creates a stopwatch with a 5-second duration.
* <...> Execute some code
* if (sw.IsExpired()) 
* {
*     <...> Do something if the time has expired
* }
*/
class Stopwatch 
{
public:
    Stopwatch() = delete;

    /*
    Constructor that initializes the stopwatch with a specific time to watch (in seconds, E.G.: 1.7f = 1s and 700ms). 
    */
    explicit Stopwatch(double watchtime) noexcept : 
        m_WatchTime(watchtime), 
        m_TimeStarted(std::chrono::steady_clock::now())
    {}



    /*
    Restarts the stopwatch by resetting the start time to the current time.
    */
    inline void Restart() noexcept { m_TimeStarted = std::chrono::steady_clock::now(); }



    /*
    Sets a new watch time for the stopwatch, updating the duration without restarting it.

    @param newWatchTime The new duration in seconds.
    */
    inline void SetWatchTime(double newWatchTime) noexcept { m_WatchTime = newWatchTime; }



    /* 
    Checks if the specified watch time has been exceeded.

    @return Returns true if the elapsed time is greater than or equal to the specified watch time.
    */
    [[nodiscard]] inline bool IsExpired() const noexcept { return GetElapsedTime() >= m_WatchTime; }



    /* 
    Gets the elapsed time in seconds since the stopwatch was started or last restarted.

    @return Returns the elapsed time in seconds as a double. (E.G.: 1.7f = 1s and 700ms)
    */
    [[nodiscard]] inline double GetElapsedTime() const noexcept 
    {
        std::chrono::duration<double> elapsed = std::chrono::steady_clock::now() - m_TimeStarted;
        return elapsed.count();
    }



    /*
    Gets the elapsed time in milliseconds since the stopwatch was started or last restarted.

    @return Returns the elapsed time in milliseconds as an integer. (E.G.: 17993 = 17s and 993ms)
    */
    [[nodiscard]] inline int GetElapsedTimeInMS() const noexcept { return static_cast<int>(GetElapsedTime() * 1000);}

private:
    double                                m_WatchTime;
    std::chrono::steady_clock::time_point m_TimeStarted;
};
