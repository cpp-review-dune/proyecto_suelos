// vektoren.cc
#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header
#include <gmp.h>       // gmp header
#include <gmpxx.h>     // gmp header
using namespace std;
using namespace hdnum;

// vereinbare Typen
using Number = double;
using Vec = Vector<Number>;
using Mat = DenseMatrix<Number>;

int main(){
    hdnum::Vector<float> x(10);
    std::cout<<"Se definió el vector x con 10 elementos"<< x << std::endl;
    std::cout<<"El comando utilizado fue hdnum::Vector<float> x(10)"<<std::endl;
    std::cout<<"También se puede definir como hdnum::Vector<double> y(10,3.14) 10 elementos del número pi"<<std::endl;
    hdnum::Vector<double> y(10,3.14);
    std::cout<<"y ="<<y<<std::endl;
    std::cout<<"hdnum::Vector<float> a, genera como resultado: "<<std::endl;
    hdnum::Vector<float> a;
    std::cout<<a<<std::endl;
    std::cout<<"Vectores con complejos"<<std::endl;
    hdnum::Vector <std::complex< double> >cx(7,std::complex<double>(1.0 ,3.0));
    std::cout<<"hdnum::Vector <std::complex< double> >cx(7,std::complex<double>(1.0 ,3.0));"<<cx<<std::endl;
    //mpf_set_default_prec(1024); // Setze Genauigkeit fuer mpf_class
    //hdnum::Vector<mpf_class>mx(7,mpf_class("4.44"));
    for (std::size_t i=0; i<x.size();i++)
        x[i]=i;
    std::cout<<"El valor de x con el ciclo es "<<x<<std::endl;
    std::cout<<"se va a hacer una copia de x en z usando z(x)"<<std::endl;
    hdnum::Vector<float> z(x);
    std::cout<<"El vector z es "<< z<<std::endl;
    hdnum::Vector<float> b;
    b=z;
    std::cout<<"El vector b es"<<b<<std::endl;
    a=5.4;
    hdnum::Vector<float> w;
    w.resize(x.size());
    w = x;
    std::cout<<"El valor de w es "<< w <<std::endl;
    hdnum::Vector<float>p(x.sub(7,3));
    std::cout<<"El valor nuevo de p de tomar los valores de x(7)..x(9)"<<p<<std::endl;
    std::cout<<"Operaciones con vectores"<<std::endl;
    hdnum::Vector<double> z1(10);
    hdnum::Vector<double> r1(10);
    for (std::size_t i=0; i<x.size();i++){
        z1[i]=i;
        r1[i]=2*i;
    }
    std::cout<<"El vector z es "<<z1<<std::endl;
    std::cout<<"El vector r1 es "<<r1<<std::endl;
    r1 = r1 + z1;
    std::cout<<"El vector nuevo vector r1 es "<<r1<<std::endl;
    r1 = z1-r1;
    std::cout<<"El vector resta es r1 es "<<r1<<std::endl;
    r1 /= 1.23;
    std::cout<<"El nuevo r1 vector dividido en 1.23 es "<<r1<<std::endl;




}