/*
	Timer.cpp
*/

#include <iostream>
#include <ctime>
#include <chrono>
#include "Timer.h"

using namespace std::chrono;
using namespace timers;

Timer::Timer(const milliseconds millis) {
	state = -1;
	left = millis;
  past = now.now();
}

Timer::~Timer() {}

int Timer::getState() {
  return state;
}

milliseconds Timer::getTimeLeft() {
	return left;
}

/*
 * Starts or unpauses timer
 * Returns amount of time left
 */
milliseconds Timer::start() {
	state = 1;
	past = now.now();
  return left;
}

milliseconds Timer::pause() {
  left -= duration_cast<milliseconds>(now.now() - past);
  state = 0;
  return left;
}

/*
 * Either user stops, when time runs out, or time is exceeded (error)
 * Keeps left as it is
 * Returns 0 milliseconds
 */
milliseconds Timer::stop() {
  state = -1;
  milliseconds zero(0);
  return zero;
}

bool Timer::isTimeLeft() {
  return ((left > now.now() - past) ? true : false);
}