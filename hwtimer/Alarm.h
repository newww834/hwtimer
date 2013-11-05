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
    short state;
		time_point<steady_clock> later;

	public:
		Alarm(const struct struct_tm later);
		~Alarm();
		steady_clock::time_point set();
		
	};
}
#endif