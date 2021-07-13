#include <iostream>
#include <math.h>
///Definición de la estructura Point
struct Point {
    double x,y;
};
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
    /// Como se define un punto con la estructura Point
    Point blank;
    blank.x = 3.0;
    blank.y = 4.0;
   
    Point p1 = { 5.0, 2.0 };
    Point p2 = p1;
    printPoint(p2);

    double d;    
    d = distance(blank,p2);
    std::cout<<"La distancia entre los puntos es: "<<d<<std::endl;
   
    printPoint(blank);
    std::cout<<"Reflejando un punto sobre el eje de 45°\n";
    reflect(blank);
    printPoint(blank);
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