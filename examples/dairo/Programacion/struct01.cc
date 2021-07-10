#include <iostream>

struct point{
    double x,y;
};

int main (){
    std::cout<<"Bienvenido al programa de Estructuras./n"<<std::endl;
   point blank; 
    blank.x= 3.0;
    blank.y= 4.0;
   point dairo = {3.0,4.0};

    std::cout<<"la coordenada en x es " <<blank.x<<std::endl;
    std::cout<<"la coordenada en y es " <<blank.x<<std::endl;
    std::cout<<"la coordenada en x de dairo es  " <<dairo.x<<std::endl;
    std::cout<<"la coordenada en y de dairo es  " <<dairo.y<<std::endl;

point p1 = {3.0 , 4.0 };
    point p2 = p1;
std::cout<< p2.x <<","<< p2.y << std::endl;
    return 0;
}