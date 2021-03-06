/*
	Stopwatch.h
*/

#ifndef Stopwatch_H_
#define Stopwatch_H_

class Stopwatch {
private:
	short state;
	long long begin, end, elapsed;

public:
	Stopwatch();
	Stopwatch(long long elapsed);
	~Stopwatch();
	long long getBegin();
	void setBegin();
	long long getEnd();
	void setEnd();
	long long getElapsed();
	void setElapsed(short elapsed);
	void start();
	void pause();
	void unpause();
	void stop();
	void printTime();
	void writeTime();
};
#endif