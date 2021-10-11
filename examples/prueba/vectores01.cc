#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

int main ()
{
    hdnum :: Vector < float > x (10);// Vector con 10 elementos
    hdnum :: Vector < double > y (10 ,3.14);// Vector con 10 elementos inicializado
    hdnum :: Vector < float > a(10) ;// Vector sin elementos
    for (std::size_t i =0; i < x.size(); i = i +1) // Acceso a cada elemento
        x[i] = i;
    std::cout<<"El vector x es: "<<std::endl;
    std::cout << x <<std::endl; 
    std::cout<<"Copiar un vector en z "<<std::endl;
    hdnum::Vector<double> z(y);
    std::cout<<z<<std::endl;
    hdnum::Vector<double>b;
    b = z;
    std::cout<<"El vector b es: "<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<"El vector a es: "<<std::endl;
    hdnum::Vector<double>c(10,2);
    double s = y*c;
    std::cout<<"El prouducto escalar es "<<s<<std::endl;
    float d = norm(c);
    std::cout<<"La norma de c = "<<d<<std::endl;
    hdnum::Vector<double> w(5);
    fill(w,(double)1.0);
    std::cout<<"El vector w es\n"<<std::endl;
    std::cout<<w<<std::endl;
    hdnum::Vector<double> ww(5);
    fill(ww,(double)1.0,(double)0.1);
    std::cout<<"El vector ww es\n"<<std::endl;
    std::cout<<ww<<std::endl;
    hdnum::Vector<double> www(5);
    unitvector(www,1);
    std::cout<<"Después de aplicar unitvector a www,1"<<std::endl;
    std::cout<<www<<std::endl;
    gnuplot("test1.dat",ww);
return 0;
}
