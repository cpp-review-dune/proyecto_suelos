#include <iostream>

struct Point {
    double x,y;
};

int main(){

    std::cout<<"bienvenido al programa de estructura de Guillermo"<<std::endl;

Point blank;
  blank.x = 3.0;
  blank.y = 4.0;

    std::cout<<"La coordenada en x es: "<<blank.x<<std::endl;
    std::cout<<"La coordenada en y es: "<<blank.y<<std::endl;

    return 0;
}