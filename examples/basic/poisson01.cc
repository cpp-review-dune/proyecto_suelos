#include<iostream>
#include "hdnum.hh"
#include<math.h>
hdnum::Vector<T> f(hdnum::Vector<T> &x,hdnum::Vector<T> &y){
    return x*exp(y);
} 
template<class T>
void aih (hdnum::Vector<T> &x,double a,double h)
{
  for (int i=1; i<x.size(); i=i+1)
    x[i] = a+i*h;
}
int main(){
    double a,b,c,d,h,k;
    int m,n;
    a = 0.0; b=2.0; c=0; d=1; m=5; n=6;
    h = (b-a)/n;
    k = (d-c)/m;
    double lam=(h*h)/(k*k);
    double u=2*(1+lam);
    double l=1;
    std::cout<<"Programa de Poisson"<<std::endl;
    std::cout<<"Recibir un vector de datos "<<std::endl;
    hdnum::Vector<double> x(n,a);
    hdnum::Vector<double> y(m,c);
    aih(x,a,h);
    std::cout<<"El vector x es: "<<x<<std::endl;
    aih(y,c,k);
    std::cout<<"El vector y es: "<<y<<std::endl;
    hdnum::DenseMatrix <double> w(n,m,0.0);
    std::cout<<"La matriz w es: "<<w<<std::endl;
    f(x,y);
    return 0;
}