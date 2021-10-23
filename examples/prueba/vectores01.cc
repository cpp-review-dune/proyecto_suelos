#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header
int main ()
{
    hdnum :: Vector < float > x (5);// Vector con 10 elementos
    hdnum :: Vector < double > y (5 ,3.14);// Vector con 10 elementos inicializado
    hdnum :: Vector < float > a(5) ;// Vector sin elementos
    for (std::size_t i =0; i < x.size(); i = i +1) // Acceso a cada elemento
        x[i] = i;
    std::cout<<"El vector x es: "<<std::endl;
    std::cout << x <<std::endl; 
    std::cout<<"Copiar un vector en z "<<std::endl;
    hdnum::Vector<float> z(x); //copia x en z
    std::cout<<z<<std::endl;
    hdnum::Vector<double>b=y;
    std::cout<<"El vector b es: "<<std::endl;
    std::cout<<b<<std::endl;
    a = 5.4;
    std::cout<<"El vector a es: "<<a<<std::endl;
    hdnum::Vector<double> w; // Vector sin elementos
    w.resize(x.size());
    w = 4.0;
    std::cout<<"El vector w es: "<<w<<std::endl;
    hdnum::Vector<float> w1(x.sub(2,3));
    std::cout<<"El vector w1 es: "<<w1<<std::endl;
    hdnum::Vector<float> w0(3);
    w0[0]=3; w0[1]=4; w0[2]=5;
    std::cout<<"El vector w0 es: "<<w0<<std::endl;
    hdnum::Vector<float> z1(3,2);
    std::cout<<"El vector z1 es: "<<z1<<std::endl;
    w0.update(2,z1);
    std::cout<<"El vector w0 es: "<<w0<<std::endl;
    /*hdnum::Vector<double>c(10,2);
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
    gnuplot("test1.dat",ww);*/
return 0;
}

