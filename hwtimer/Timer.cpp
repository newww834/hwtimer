/*
	Timer.cpp
*/

#include <ctime>
#include <chrono>
#include "Timer.h"

using namespace std::chrono;
using namespace timers;

Timer::Timer(milliseconds millis) {
	state = -1;
	this->d = millis;
}

Timer::~Timer() {}

milliseconds Timer::getDuration() {
	return this->d;
}

void Timer::start() {
	state = 1;
	
}

void Timer::pause() {
  
  state = 0;
  
}

void Timer::unpause() {
  state = 0;
  
}

void Timer::stop() {
  state = -1;
  this->d = ;
  
  
}