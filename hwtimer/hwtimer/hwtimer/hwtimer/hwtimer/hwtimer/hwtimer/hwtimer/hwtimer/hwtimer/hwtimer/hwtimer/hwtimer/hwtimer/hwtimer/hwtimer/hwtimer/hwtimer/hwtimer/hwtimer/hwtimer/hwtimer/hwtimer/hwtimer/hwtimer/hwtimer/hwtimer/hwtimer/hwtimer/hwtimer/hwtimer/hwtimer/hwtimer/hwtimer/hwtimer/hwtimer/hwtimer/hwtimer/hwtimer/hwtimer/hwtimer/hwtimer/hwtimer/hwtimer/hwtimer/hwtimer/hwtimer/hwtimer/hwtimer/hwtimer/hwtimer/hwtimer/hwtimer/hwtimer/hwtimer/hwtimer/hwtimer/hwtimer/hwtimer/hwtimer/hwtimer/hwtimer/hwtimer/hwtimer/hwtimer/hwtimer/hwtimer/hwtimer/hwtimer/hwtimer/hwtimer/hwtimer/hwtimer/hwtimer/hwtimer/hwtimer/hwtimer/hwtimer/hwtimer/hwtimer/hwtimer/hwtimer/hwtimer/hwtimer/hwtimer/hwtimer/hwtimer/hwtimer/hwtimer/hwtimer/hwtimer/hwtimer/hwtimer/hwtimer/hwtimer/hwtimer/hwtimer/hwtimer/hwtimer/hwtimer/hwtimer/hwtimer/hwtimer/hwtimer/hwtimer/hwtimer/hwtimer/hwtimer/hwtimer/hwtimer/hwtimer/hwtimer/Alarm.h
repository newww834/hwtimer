/*
	Alarm.h
*/

#ifndef _ALARM_H
#define _ALARM_H

#include <ctime>
#include <chrono>

using namespace std::chrono;

namespace timers {
	class Alarm {
	private:
		steady_clock now;
		steady_clock::time_point later;

	public:
		Alarm(const struct_tm later);
		~Alarm();
		steady_clock::time_point set();
		
	};
}
#endif