#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

int main ()
{
    hdnum :: Vector < float > x(10);// Vector con 10 elementos
    hdnum :: Vector < double > y(10 ,3.14);// Vector con 10 elementos inicializado
    hdnum :: Vector < float > a ;// Vector sin elementos
    for (std::size_t i =0; i < x.size(); i = i +1) // Acceso a cada elemento
        x[i] = i;
    std::cout<<"El vector x es: "<<std::endl;
    std::cout << x <<std::endl; 
    std::cout<<"El vector y es: "<<std::endl;
    std::cout << y <<std::endl; 
    
return 0;
}
