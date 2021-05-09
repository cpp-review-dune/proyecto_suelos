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
    std::cout<< x ;
}