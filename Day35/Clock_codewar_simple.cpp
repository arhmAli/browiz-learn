Clock shows h hours, m minutes and s seconds after midnight.
Your task is to write a function which returns the time since midnight in milliseconds

#include <iostream>
using namespace std;
int past(int h, int m, int s) {
  int hourMili=1000*60*60;
  int minuteMili=1000*60;
  int milisec=(hourMili*h)+(minuteMili*m)+(1000*s);
  return milisec;
}
