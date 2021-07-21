#include<iostream>
#include<math.h>
/**Definición de la estructura tipo punto 
*/
struct Point {
  double x, y;
};
/**Definición de la estructura tipo rectángulo
*/
struct Rectangle {
  Point corner;
  double width, height;
};
/**Definición de la función findCenter que encuentra
el centro de un rectángulo*/

Point findCenter (Rectangle& box)
{
  double x = box.corner.x + box.width/2;
  double y = box.corner.y + box.height/2;
  Point result = {x, y};
  return result;
}
/*Definir la función para imprimir un punto */
void printPoint (Point p) {
  std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
}

int main(){
std::cout<<"Funciones que retornan estructuras \n";
Rectangle box = { {10.0, 10.0}, 100, 200 };
Point center = findCenter (box);
printPoint (center);
return 0;
}
