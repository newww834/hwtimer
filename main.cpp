/*
	main.cpp
*/

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <ctime>
#include "Stopwatch.h"

using namespace std;

int main(int argc, char **argv) {
	int x;
	Stopwatch a;
	a.start();
	cin >> x;
	a.stop();
}