#include<iostream>
#include "hdnum.hh"
#include<math.h>
#include<lapack.h>

int main(){
  hdnum::Vector<double> b(3);
  b[0]=15;
  b[1]=73;
  b[2]=12;
  std::cout<<"El vector b es: "<<b<<std::endl;
  hdnum::DenseMatrix<double>A(3,3);
  A[0][0]=2;  A[0][1]=1; A[0][2]=7; 
  A[1][0]=8;  A[1][1]=8; A[1][2]=33;  
  A[2][0]=-4; A[2][1]=10; A[2][2]=4;
  std::cout<<"La matriz es: "<<A<<std::endl;
  hdnum::Vector<double> x(3,0.0);
  hdnum::Vector<double> s(3);
  hdnum::Vector<std::size_t> p(3);
  hdnum::Vector<std::size_t> q(3);
  hdnum::row_equilibrate(A,s);
  lr_fullpivot (A ,p , q );
  hdnum::apply_equilibrate(s,b);
  hdnum::permute_forward(p,b);
  solveL (A ,b , b );
  solveR (A ,x , b );
  std::cout<<"La solución x del sistema Rx=y es:"<<x<<std::endl;
  hdnum::gnuplot("final.dat",A);
  return 0;

}
