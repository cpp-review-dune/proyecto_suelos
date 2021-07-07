#include <iostream> 
using namespace std; 

int main () 
{ 
int x, y, dife = 0, a, b, c, d, e, f, g, h, i;

cout<<"Ingrese el valor de x"<<endl;
cin>>x;
cout<<"Ingrese el valor de y"<<endl;
cin>>y;
cout<<endl;

dife = x - y;

if(dife <= 1 || dife >= 11)
{ cout<<"La diferencia esta fuera de rango"<<endl; }
else
{
a = y + 1; b = y + 2; c = y + 3; d = y + 4; 
e = y + 5; f = y + 6; g = y + 7; h = y + 8;
i = y + 9;

 switch (dife)
 {
  case 2: 
  cout<<a<<endl;
  break;
  case 3:
  cout<<a<<endl<<b<<endl;
  break;
  case 4: 
  cout<<a<<endl<<b<<endl<<c<<endl;
  break;
  case 5:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
  break;
  case 6:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
  break;
  case 7:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
  break;
  case 8:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl;
  break;
  case 9:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl;
  break;
  case 10:
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<i<<endl;
  break;
 }
}
 
 
return 0;
}