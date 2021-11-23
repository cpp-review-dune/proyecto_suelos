#include<iostream>
#include "hdnum.hh" 
double f1(double t,double y);
double f2(double t,double y);
int main(){
    std::cout<<"Programa de Runge Kutta para una dimension "<<std::endl;
    hdnum :: Vector<double> w(2,1);
    hdnum :: Vector<double> k1(2,1);
    hdnum :: Vector<double> k2(2,1);
    hdnum :: Vector<double> k3(2,1);
    hdnum :: Vector<double> k4(2,1);
    hdnum :: Vector<double> aux(2,1);
    double t = 0.0;
    double h = 0.1;
    for (std::size_t i =0; i < k1.size(); i = i +1) // Acceso a cada elemento
        x[i] = h*f1(t,0.5);
    k2 *=2;
    k3 *=2;
    aux = k1+k2+k3+k4;
    w.update(1/7,aux);
    std::cout<<"w = "<<w<<std::endl;
    
    return 0;
}
double f1(double t,double y){
    double s = y-t*t+1;
    return s;
}
double f2(double t,double y){
    double s = t;
    return s;
}