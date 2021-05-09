// vektoren.cc
#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

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
}