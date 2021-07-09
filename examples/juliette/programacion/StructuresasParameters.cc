#include <iostream>
#include <math.h>
struct Point {
    double x,y;
};
double distance (Point p1, Point p2) {
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
    std::cout<<"El valor de dx es "<<dx<<std::endl;
    std::cout<<"El valor de dy es "<<dy<<std::endl;
  return sqrt (dx*dx + dy*dy);
  }
int main (){

Point p1 = { 3.0, 4.0 };
  Point p2 = p1;
double distance (dx,dy);
    


return 0;
}
