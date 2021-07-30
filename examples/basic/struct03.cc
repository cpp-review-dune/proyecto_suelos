#include <iostream>
#include <math.h>
///Definición de la estructura Point
struct Point {
    double x,y;
};
struct Rectangle {
  Point corner;
  double width, height;
};
/**Definición de la estructura rectángulo
struct Rectangle {
  Point corner;
  double width, height;
};
*/
///Definición de las funciones que utilizan la estructura
/** En primer lugar la función distancia entre dos puntos
Imprimir un punto
Reflejar un punto
*/
double distance (Point p1, Point p2);
void printPoint (Point p);
void reflect (Point& p);

/// Definiendo la función main()
int main (){
    /// Definir un puntos
    Point corner = {0.0, 10.0};
    Rectangle box = {corner, 100.0, 200.0};
    box.width +=50.0;
    std::cout<<box.width<<std::endl;
    double x = box.corner.y;
    std::cout<<"El valor de x es "<<x<<std::endl;
   
return 0;
}
double distance (Point p1,Point p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    std::cout<<"El valor de dx es "<<dx<<std::endl;
    std::cout<<"El valor de dy es "<<dy<<std::endl;
    return sqrt (dx*dx + dy*dy);
}
void printPoint (Point p){
  std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
}
void reflect (Point& p)
{
  double temp = p.x;
  p.x = p.y;
  p.y = temp;
}
