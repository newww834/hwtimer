/*
	Timer.h
*/

#ifndef _TIMER_H
#define _TIMER_H

#include <ctime>
#include <chrono>

using namespace std::chrono;

namespace timers {
	class Timer {
	private:
		int state;
		milliseconds left;
    time_point<steady_clock> past;
    steady_clock now;

	public:
    Timer(const milliseconds millis);
		~Timer();
    int getState();
		milliseconds getTimeLeft();
		milliseconds start();
		milliseconds pause();
		milliseconds stop();
    bool isTimeLeft();
	};
}
#endif