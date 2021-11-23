#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header
int main ()
{
    hdnum::Vector <double> x(10);
    for (int i=0;i<10;i++){
        x[i]=2*i+1;
    }
    std::cout<<"Salid: "<<x<<std::endl;
    gnuplot("test_gnu.dat",x);
    return 0;
}