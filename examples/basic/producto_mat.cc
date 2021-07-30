#include<iostream>
#include<math.h>
void escrx(double *x,int n);
void lectA1(double *a, int m,int n, char c);
void prodABsub1(double *a,int m,int n,double *b,int p,int q,double *c);
int main(){
    std::cout.precision(2);
    double *p,x[20]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0,2.1,2.2,2.3,2.4};
    p = x;
    escrx(p,15);
    return 0;
}
void escrx(double *x,int n){
    int i;
    for (i=0;i<n;i++){
        //std::cout<< "(i+1)%5 "<<(i+1)%5<<"\n";
        std::cout<<std::fixed<<x[i]<<"   ";
        if ((i+1)%5 ==0||(i == n-1)) {
            std::cout<<"\n";
        }
    }  
    std::cout<<"\n";
}