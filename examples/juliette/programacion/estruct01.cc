#include <iostream>

struct Point {
    double x,y;
};

int main (){
    std::cout<<"Bievenido al programa de estructura de Juliette\n"<<std::endl;
Point blank;
  blank.x = 3.0;
  blank.y = 4.0;

  std::cout<<"La cordenada en x es " << blank.x<<std::endl;
  std::cout<<"La cordenada en y es " << blank.y<<std::endl;

    return 0;
}