#include<iostream>
double promx1(double *x,int n);
int main(){
    double x[60]={1.1, 1.2, 1.3, 1.4};
    double *p,*q;
    std::cout<<" x = "<<x<<", dir de x[0] = "<<&x[0]<<std::endl;
    p = x;
    q = x;
    std::cout<<"p = "<<p<<std::endl;
    std::cout<<"*p = "<<*p<<std::endl;
    for (int i=0;i<4;i++){
        std::cout<<*(p+i)<<" ";
    }
    std::cout<<std::endl;
    for (int j=0;j<4;j++){
        std::cout<<*q<<" ";
        q++;
    }
    std::cout<<std::endl;
    double res = promx1(p,4);
    std::cout<<"El promedio es "<< res <<"\n";
    return 0;
}
double promx1(double *x,int n){
    int i;
    double suma = 0.0;
    for(i = 0;i<n;i++){
        suma += *(x+i);
    }
    return suma/n;
}
