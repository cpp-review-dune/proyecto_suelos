#include <iostream>

struct Point {
    double x,y;
};

int main (){

    std::cout<<"bienvenido al programa de estructura de Guillermo"<<std::endl;

    Point blank;
    blank.x = 3.0;
    blank.y = 4.0;
    Point Guille = {10.0, 3.5};

    std::cout<<"La coordenada en x es: "<<blank.x<<std::endl;
    std::cout<<"La coordenada en y es: "<<blank.y<<std::endl;
    std::cout<<"La coordenada en x de Guille es: "<<Guille.x<<std::endl;
    std::cout<<"La coordenada en y de Guille es: "<<Guille.y<<std::endl;

    Point p1 = { 3.0, 4.0 };
    Point p2 = p1;
    std::cout << p2.x << ", " <<  p2.y <<std::endl;
  

    return 0;
}