#include <iostream>
#include <math.h>

double distance (Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    std::cout<<"El valor de dx es "<<dx<<std::endl;
    std::cout<<"El valor de dy es "<<dy<<std::endl;
    return sqrt (dx*dx + dy*dy);
}
struct Point {
    double x,y;
};

int main (){

    Point blank;
    blank.x = 3.0;
    blank.y = 4.0;

    Point p1 = { 3.0, 4.0 };
    Point p2 = p1;

    double distance(Point blank);
    


return 0;
}