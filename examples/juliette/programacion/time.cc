#include <iostream>
#include <math.h>

struct Time {
  int hour, minute;
  double second;
};
int main (){
Time time = { 11, 59, 3.14159 };
    std::cout<<time.hour<<" hour "<<time.minute<<" minute "<<time.second<<" second "<<std::endl;
    return 0;
}