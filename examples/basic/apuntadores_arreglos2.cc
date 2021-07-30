#include<iostream>

int main(){
    //apuntadores a apuntadores
    /*int i, *p, **q;
    i = 16;
    p = &i;
    q = &p;
    std::cout<<"i = "<<i<<std::endl;
    std::cout<<"*p = "<<*p<<std::endl;
    std::cout<<"*q = "<<*q<<std::endl;
    std::cout<<"**q = "<<**q<<std::endl;
    */
    double *p,c[4][3]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,1.1,1.2};
    int n,i,j;
    n=3;
    i=1;
    j=3;
    p = &c[0][0];
    for (i= 0;i<4;i++){
        for(j=0;j<4;j++){
            std::cout<<"i = "<<i<<" j= "<<j<< "c[i][j] = "<<c[i][j]<<" *pij = "<<*(p+i*n+j)<<std::endl;
    }
    }

    return 0;
}