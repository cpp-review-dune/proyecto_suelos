#include <iostream>
#include <math.h>
struct Time {
  int hour, minute;
  double second;
};
void printTime (Time& t) {
  std::cout << t.hour << ":" << t.minute << ":" << t.second <<std::endl;
}
bool after (Time& time1, Time& time2) {
  if (time1.hour > time2.hour) return true;
  if (time1.hour < time2.hour) return false;

  if (time1.minute > time2.minute) return true;
  if (time1.minute < time2.minute) return false;

  if (time1.second > time2.second) return true;
  return false;
}
Time addTime (Time& t1, Time& t2) {
  Time sum;
  sum.hour = t1.hour + t2.hour;
  sum.minute = t1.minute + t2.minute;
  sum.second = t1.second + t2.second;
  if (sum.second >= 60.0) {
    sum.second -= 60.0;
    sum.minute += 1;
  }
  if (sum.minute >= 60) {
    sum.minute -= 60;
    sum.hour += 1;
  }
  return sum;
}
void increment (Time& time, double secs) {
  time.second += secs;

  while (time.second >= 60.0) {
    time.second -= 60.0;
    time.minute += 1;
  }
  while (time.minute >= 60) {
    time.minute -= 60;
    time.hour += 1;
  }
}
void addTimeFill (const Time& t1, const Time& t2, Time& sum) {
  sum.hour = t1.hour + t2.hour;
  sum.minute = t1.minute + t2.minute;
  sum.second = t1.second + t2.second;

  if (sum.second >= 60.0) {
    sum.second -= 60.0;
    sum.minute += 1;
  }
  if (sum.minute >= 60) {
    sum.minute -= 60;
    sum.hour += 1;
  }
}


int main (){
Time time1 = { 10, 59, 3.14159 };
Time time2 = {12, 59, 57.67532};
Time time3=addTime(time1,time2);
Time time4;
    //std::cout<<time.hour<<" hour "<<time.minute<<" minute "<<time.second<<" second "<<std::endl;
    printTime(time1);
    bool a=after(time1,time2);
    std::cout<<a<<std::endl;
  printTime(time3);
  increment(time2,3000);
  addTimeFill(time1,time2,time4);
  printTime(time4);
    return 0;
}