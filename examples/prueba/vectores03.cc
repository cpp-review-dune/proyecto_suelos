#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header
double sum ( hdnum :: Vector < double > x ) {
double s (0.0);
for ( std :: size_t i =0; i < x . size (); i = i +1)
s = s + x [ i ];
return s ;
}
//Usando la función template
template < class T >
T suma ( const hdnum :: Vector <T >& x ) {
T s (0.0);
for ( std :: size_t i =0; i < x . size (); i = i +1)
s = s + x [ i ];
return s ;
}
int main(){
    hdnum::Vector<double> a(5,2);
    hdnum::Vector<float> b(5,3);
    double p = sum(a);
    std::cout<<"La suma de los valores es: "<<p<<std::endl;
    float q = suma(b);
    std::cout<<"La suma de los valores es: (bis) "<<q<<std::endl;
    
    return 0;
}