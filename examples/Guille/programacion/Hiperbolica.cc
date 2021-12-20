#include<iostream>
#include "hdnum.hh"
#include<math.h>

int main(){
  hdnum::Vector<double> b(9);
  b[0]=0.308865520098932; b[1]=0.587527525713892;
  b[2]=0.80873606055313; b[3]=0.95085946050647; b[4]=0.999999682931835;
  b[5]=0.951351376233828; b[6]=0.809671788277164; b[7]=0.588815561967795;b[8]=0.310379909672042;

  hdnum::Vector<double> c(9);
  c[0]=0.307355344374734; c[1]=0.58178217863632;
  c[2]=0.796873290320245; c[3]=0.932262825000875; c[4]=0.975552550650992;
  c[5]=0.923441991856231; c[6]=0.781959964853718; c[7]=0.565783791573242; c[8]=0.296004993852712; 

  std::cout<<"El vector b es: "<<b<<std::endl;
  hdnum::DenseMatrix<double>A(9,9);
  A[0][0]=0;  A[0][1]=1; A[0][2]=0; A[0][3]=0; A[0][4]=0;  A[0][5]=0; A[0][6]=0; A[0][7]=0; A[0][8]=0;
  A[1][0]=1; A[1][1]=0; A[1][2]=1; A[1][3]=0; A[1][4]=0;  A[1][5]=0; A[1][6]=0; A[1][7]=0; A[1][8]=0;
  A[2][0]=0;  A[2][1]=1; A[2][2]=0; A[2][3]=1; A[2][4]=0;  A[2][5]=0; A[2][6]=0; A[2][7]=0; A[2][8]=0;
  A[3][0]=0; A[3][1]=0; A[3][2]=1; A[3][3]=0; A[3][4]=1;  A[3][5]=0; A[3][6]=0; A[3][7]=0; A[3][8]=0;
  A[4][0]=0;  A[4][1]=0; A[4][2]=0; A[4][3]=1; A[4][4]=0;  A[4][5]=1; A[4][6]=0; A[4][7]=0; A[4][8]=0;
  A[5][0]=0;  A[5][1]=0; A[5][2]=0; A[5][3]=0; A[5][4]=1;  A[5][5]=0; A[5][6]=1; A[5][7]=0; A[5][8]=0;
  A[6][0]=0;  A[6][1]=0; A[6][2]=0; A[6][3]=0; A[6][4]=0;  A[6][5]=1; A[6][6]=0; A[6][7]=1; A[6][8]=0;
  A[7][0]=0;  A[7][1]=0; A[7][2]=0; A[7][3]=0; A[7][4]=0;  A[7][5]=0; A[7][6]=1; A[7][7]=0; A[7][8]=1;
  A[8][0]=0;  A[8][1]=0; A[8][2]=0; A[8][3]=0; A[8][4]=0;  A[8][5]=0; A[8][6]=0; A[8][7]=1; A[8][8]=0;

  std::cout<<"La matriz es: "<<A<<std::endl;

  c *= -1;

  A.umv(c, b);

  std::cout<<"La Solución es:"<<c<<std::endl;

  //std::cout<<"La solución x del sistema Rx=y es:"<<x<<std::endl;
  //hdnum::gnuplot("final.dat",A);
  return 0;

}