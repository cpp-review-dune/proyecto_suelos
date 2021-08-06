#include<iostream>
#include <math.h>       /* fabs */
int solTrSup(double *a,double *b,int n,double eps);
double prodXY(double *x,double *y,int n);
void escrx(double *x,int n);
int main(){
    double x[16] = {4,3,-2,1,0,-0.25,2.5,4.25,0,0,45,79,0,0,0,2.8};
    double y[4] = {4,-11,-203,-5.6};
    double *p,*q;
    p = x; q = y;
    escrx(p,16);
    solTrSup(p,q,4,0.01);
    //escrx(q,4);
    //std::cout<<"El producto punto es "<<res<<std::endl;

    return 0;
}
int solTrSup(double *a,double *b,int n,double eps){
    //Solución del sistema triangular superior
    // Ax=b
    //A está almacenada en un arreglo unidimiensional
    //Aij esta en a[i*n+j]
    //Devuelve 1 si se resolvió el sistema
    //         0 si la matriz es singular 
    //         -1 si n es inadecuado
    //A se considera singular si
    // |Aij|<= eps para algún i
    int i, ii, n1, n_1;
    if( n<=0) return -1;
    n1 = n+1;
    n_1 = n-1;
    for(i = n_1;i>=0;i--){
        ii = i*n1;
        if (fabs(a[ii])<= eps) return 0;
        b[i]=(b[i]-prodXY(&a[ii+1],&b[i+1],n_1+i))/a[ii];
        std::cout<<"b["<<i<<"]="<<b[i]<<std::endl;
    }
    return 1;
}
double prodXY(double *x,double *y,int n){
    //producto interno x.y
    double s = 0.0;
    double *pxi,*pyi,*pxn;
    pxi = x;
    pyi = y;
    pxn = x+ n;
    while (pxi < pxn){
        s += (*pxi++)*(*pyi++); 
    }
    return s;
}
void escrx(double *x,int n){
    int i;
    for (i=0;i<n;i++){
        //std::cout<< "(i+1)%5 "<<(i+1)%5<<"\n";
        std::cout<<std::fixed<<x[i]<<"   ";
        if ((i+1)%4 ==0||(i == n-1)) {
            std::cout<<"\n";
        }
    }  
    std::cout<<"\n";
}