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
		short state;
		milliseconds left;
    time_point<steady_clock> past;

	public:
		Timer(const milliseconds millis);
		~Timer();
		milliseconds getTimeLeft();
		milliseconds start();
		milliseconds pause();
		milliseconds stop();
    bool isTimeLeft();
	};
}
#endif