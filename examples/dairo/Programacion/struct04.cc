#include<iostream>
#include<math.h>
/**Definicion de la estructura tipo punto
*/
struct Point { 
    double x,y; 
};

struct Rectangle {
  Point corner;
  double width, height;
};

void printPoint (Point p) {
  std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
}

Point findCenter (Rectangle& box)
{
  double x = box.corner.x + box.width/2;
  double y = box.corner.y + box.height/2;
  Point result = {x, y};
  return result;
}
int main(){
    std::cout<<"Funciones que retornan estructuras \n";
Rectangle box = { {0.0, 0.0}, 100, 200 };
  Point center = findCenter (box);
  printPoint (center);
  return 0; 
}
