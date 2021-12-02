#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

int main ()
{
    hdnum :: DenseMatrix <float> C (4,4,2.33);
    hdnum :: DenseMatrix <float> D(C);
    hdnum :: DenseMatrix <float> B(4,4);
    hdnum :: DenseMatrix <float> E(4,4);
    
    std::cout<<"La matriz D es: "<<D<<std::endl; 
    for ( int i=0; i < B.rowsize(); ++ i )
        for (int j=0; j < B . colsize (); ++ j )
            B [i][j] = i+j;
    std::cout<<"La matriz B es: "<<B<<std::endl; 
         
    hdnum :: DenseMatrix <float> A (C.rowsize(),C.colsize());
    A = C;
    std::cout<<"La matriz A es: "<<A<<std::endl; 
    A += C;
    std::cout<<"La nueva matriz A es: "<<A<<std::endl;
    B /= 1.2;
    E.update(2,B);
    std::cout<<"La nueva matriz E es: "<<E<<std::endl;
    hdnum :: Vector < float > x (4 ,1.0); // Construimos dos vectores
    hdnum :: Vector < float > y (4 ,2.0);
    hdnum :: DenseMatrix < float > G (4,4);
    for ( int i=0; i < B.rowsize(); ++ i )
        for (int j=0; j < B . colsize (); ++ j )
            G [i][j] = i*j;
    std::cout<<"La matriz G es: "<<G<<std::endl; 
    G.sc(x,1);
    std::cout<<"La primera columna de G es: "<<x<<std::endl;
    G.sr(y,0);
    std::cout<<"La matriz G es: "<<G<<std::endl;
    
    
 

return 0;
}