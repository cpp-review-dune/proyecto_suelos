#include<iostream>

int main(){
    //apuntador
    double *p,x=0.5;
    int *q,i=4;
    p = &x;
    q = &i;
    std::cout<<" p = "<<p<<" Dirección de memoria de p "<< std::endl;
    std::cout<<" *p = "<<*p<<" El valor almacenado en p "<< std::endl;
    std::cout<<" x = "<<x<<std::endl;
    std::cout<<" q = "<<q<<" Dirección de memoria de q "<< std::endl;
    std::cout<<" *q = "<<*q<<" El valor almacenado en q "<< std::endl;
    std::cout<<" i = "<<i<<std::endl;
    return 0;
}