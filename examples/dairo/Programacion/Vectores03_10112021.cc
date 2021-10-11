#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

int main ()
{
    hdnum :: Vector < double > z  (5);// Vector con 10 elementos
    hdnum :: Vector < double> y (5 ,2);// Vector con 10 elementos inicializado
    hdnum :: Vector < double > a ;// Vector sin elementos
    z = 1;
    a= z+y;
    std::cout<<"El vector z es: "<<std::endl;
    std::cout << z <<std::endl; 
    std::cout<<"El vector y es: "<<std::endl;
    std::cout << y <<std::endl; 
    std::cout<<"La suma de los vectores Z y Y es:"<<std::endl;
    z +=y; // z=z+y
    std::cout << z <<std::endl; 
    a *= 1.23;
    std::cout<<"El vector a es: "<<std::endl;
    std::cout << a <<std::endl; 

    
return 0;
}
