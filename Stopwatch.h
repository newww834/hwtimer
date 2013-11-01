// Stopwatch.h

#include <ctime>

#ifndef Stopwatch_H_
#define Stopwatch_H_

class Stopwatch {
private:
	time_t start;
	time_t end;

public:
	Stopwatch();
	Stopwatch(time_t start);

	time_t getStart();
	void setStart(time_t start);
	time_t getEnd();
	void setEnd(time_t end);

	Stopwatch operator+(const Stopwatch & a) const;
	Stopwatch operator-(const Stopwatch & a) const;
	Stopwatch operator*(const Stopwatch & a) const;
	Stopwatch operator/(const Stopwatch & a) const;
	//Stopwatch operator%(const Stopwatch & a) const; 

	friend Stopwatch operator+(double a, const Stopwatch & b);
	friend Stopwatch operator-(double a, const Stopwatch & b);
	friend Stopwatch operator*(double a, const Stopwatch & b);
	friend Stopwatch operator/(double a, const Stopwatch & b);
	//friend Stopwatch operator%(double a, const Stopwatch & b);

};
#endif