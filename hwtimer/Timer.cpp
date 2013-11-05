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
	past = steady_clock::now();
  return left;
}

milliseconds Timer::pause() {
  if (!this->isTimeLeft()) { // no more time left
    fprintf(stderr, "Timer exceeded its original time\n");
    this->stop();
  } else {
    left = duration_cast<milliseconds>(steady_clock::now() - past);
    state = 0;
  }
  return left;
}

/*
 * Either user stops, when time runs out, or time is exceeded (error)
 * Keeps left as it is
 * Returns 0 milliseconds
 */
milliseconds Timer::stop() {
  state = -1;
  return duration<milliseconds>::zero();
}

bool Timer::isTimeLeft() {
  return ((left > steady_clock::now() - past) ? true : false);
}