#include<iostream>
#include "hdnum.hh"
#include<math.h>

int main(){
  hdnum::Vector<double> b(9);
  b[0]=25; b[1]=50; b[2]=150;
  b[3]=0; b[4]=0; b[5]=50;
  b[6]=0; b[7]=0; b[8]=25;

  std::cout<<"El vector b es: "<<b<<std::endl;
  hdnum::DenseMatrix<double>A(9,9);
  A[0][0]=4.0;  A[0][1]=-1; A[0][2]=0; A[0][3]=-1; A[0][4]=0;  A[0][5]=0; A[0][6]=0; A[0][7]=0; A[0][8]=0;
  A[1][0]=-1; A[1][1]=4; A[1][2]=-1; A[1][3]=0; A[1][4]=-1;  A[1][5]=0; A[1][6]=0; A[1][7]=0; A[1][8]=0;
  A[2][0]=0;  A[2][1]=-1; A[2][2]=4; A[2][3]=0; A[2][4]=0;  A[2][5]=-1; A[2][6]=0; A[2][7]=0; A[2][8]=0;
  A[3][0]=-1; A[3][1]=0; A[3][2]=0; A[3][3]=4; A[3][4]=-1;  A[3][5]=0; A[3][6]=-1; A[3][7]=0; A[3][8]=0;
  A[4][0]=0;  A[4][1]=-1; A[4][2]=0; A[4][3]=-1; A[4][4]=4;  A[4][5]=-1; A[4][6]=0; A[4][7]=-1; A[4][8]=0;
  A[5][0]=0;  A[5][1]=0; A[5][2]=-1; A[5][3]=0; A[5][4]=-1;  A[5][5]=4; A[5][6]=0; A[5][7]=0; A[5][8]=-1;
  A[6][0]=0;  A[6][1]=0; A[6][2]=0; A[6][3]=-1; A[6][4]=0;  A[6][5]=0; A[6][6]=4; A[6][7]=-1; A[6][8]=0;
  A[7][0]=0;  A[7][1]=0; A[7][2]=0; A[7][3]=0; A[7][4]=-1;  A[7][5]=0; A[7][6]=-1; A[7][7]=4; A[7][8]=-1;
  A[8][0]=0;  A[8][1]=0; A[8][2]=0; A[8][3]=0; A[8][4]=0;  A[8][5]=-1; A[8][6]=0; A[8][7]=-1; A[8][8]=4;

  std::cout<<"La matriz es: "<<A<<std::endl;
  
  hdnum::Vector<double> x(9,0.0);
  hdnum::Vector<double> s(9);
  hdnum::Vector<std::size_t> p(9);
  hdnum::Vector<std::size_t> q(9);
  hdnum::row_equilibrate(A,s);
  lr_fullpivot (A ,p , q );
  hdnum::apply_equilibrate(s,b);
  hdnum::permute_forward(p,b);
  solveL (A ,b , b );
  solveR (A ,x , b );
  permute_backward(q,x);
  std::cout<<"La solución x del sistema Rx=y es:"<<x<<std::endl;
  hdnum::gnuplot("final.dat",A);
  return 0;

}
