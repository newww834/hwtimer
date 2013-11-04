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
		milliseconds d;

	public:
		Timer(milliseconds millis);
		~Timer();
		milliseconds getDuration();
		void start();
		void pause();
		void unpause();
		void stop();
	};
}
#endif