#include <iostream>
#include <math.h>
#include </workspace/proyecto_suelos/examples/juliette/programacion/libtime.h>
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