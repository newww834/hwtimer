//
//  main.cpp
//  hwtimer
//
//  Created by improv on 11/4/13.
//  Copyright (c) 2013 improv. All rights reserved.
//

#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <unistd.h>
#include "Timer.h"

#define millisInSecond (1000)
#define millisInMinute (60000)
#define millisInHour	 (3600000)
#define millisInDay		 (86400000)

using namespace std;
using namespace std::chrono;
using namespace timers;

bool logging = 0, found;

void scanargs(char *arg) {
  if (arg[0] == '-') {
    while (*(++arg) != '\n') {
      switch (*arg) {
        case 'l':
          found = 1;
          logging = 1;
          continue;
        default:
          break;
      }
    }
  } else if (found != 1) {
    fprintf(stderr, "Invalid argument\n");
    exit(0);
  }
}

int main(int argc, const char * argv[]) {
  milliseconds placeholder;
  milliseconds millis(50000);
  Timer a = *new Timer(millis);
  a.start();
  while (a.isTimeLeft()) {
    sleep(1);
    placeholder = a.pause();
    cout << placeholder.count() << endl;
  }
  
  return 0;
}