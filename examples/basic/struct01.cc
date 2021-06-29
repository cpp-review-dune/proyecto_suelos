#include <iostream>
#include <cmath>
struct Point{
	double x,y;
};
void printPoint (Point p) {
  std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
}
double distancia (Point p1, Point p2) {
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
  return sqrt (dx*dx + dy*dy);
}
void reflect (Point& p)
{
  double temp = p.x;
  p.x = p.y;
  p.y = temp;
}
int main(){
	Point blank;
	blank.x = 3.0;
	blank.y = 4.0;
	Point black = {5.0,6.0};
	Point p2 = black;
	int x = blank.x;
	std::cout<< blank.x << ", "<< blank.y<<std::endl;
	double distance = blank.x*blank.x+blank.y*blank.y;
	std::cout<<" Distance = "<<distance<<std::endl;
	std::cout<< black.x << ", "<< black.y<<std::endl;
	distance = black.x*black.x+black.y*black.y;
	std::cout<<" Distance = "<<distance<<std::endl;
//	std::cout<< "p.x= "<< p2.x << ", p.y= "<< p2.y<<std::endl;
	printPoint(p2);	
	double d1 = distancia(black,blank);
	std::cout<<"La distancia es "<<d1<<std::endl;
	Point p = {2.0,6.0};
	printPoint(p);
	reflect(p);
	printPoint(p);

	return 0;
}
