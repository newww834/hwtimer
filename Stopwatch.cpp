/*
	Stopwatch.cpp
*/

#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "Stopwatch.h"

Stopwatch::Stopwatch() {
	initial = begin = end = elapsed = 0;
}

Stopwatch::Stopwatch(long long elapsed) {
	initial = begin = end = 0;
	(*this).elapsed = elapsed;
}

Stopwatch::~Stopwatch() {}

long long Stopwatch::getBegin() {
	return begin;
}

void Stopwatch::setBegin(long long begin) {
	(*this).begin = begin;
}

long long Stopwatch::getEnd() {
	return end;
}

void Stopwatch::setEnd(long long end) {
	(*this).end = end;
}

long long Stopwatch::getElapsed() {
	return begin - end;
}

void Stopwatch::start() {
	initial == 0 ? initial = begin = (long long)time(NULL)
							 : begin = (long long)time(NULL);
}

void Stopwatch::pause() {
	end = (long long)time(NULL);
	elapsed += begin - end;
}

void Stopwatch::unpause() {
	begin = end = (long long)time(NULL);
}

void Stopwatch::stop() {
	(*this).pause();
	(*this).printTime();
}

void Stopwatch::printTime() {
	printf("%lld\n", elapsed);
}

void Stopwatch::writeTime(bool GM) {
	// tbd
}