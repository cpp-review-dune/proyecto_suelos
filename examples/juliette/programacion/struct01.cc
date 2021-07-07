#include <iostream>

struct Point {
    double x,y;
};

int main (){
    std::cout<<"Bievenido al programa de estructura de Juliette\n"<<std::endl;
Point blank;
  blank.x = 3.0;
  blank.y = 4.0;
Point jul= {2.0,6.0};


  std::cout<<"La cordenada en x es " << blank.x<<std::endl;
  std::cout<<"La cordenada en y es " << blank.y<<std::endl;
  std::cout<<"La cordenada en x de jul es " << jul.x<<std::endl;
  std::cout<<"La cordenada en y de jul es " << jul.y<<std::endl;
Point p1 = { 3.0, 4.0 };
  Point p2 = p1;
  std::cout << p2.x << ", " <<  p2.y << std::endl;

    return 0;
}