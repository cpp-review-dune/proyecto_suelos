#include<iostream>
//#include "hdnum.hh"
#include<math.h>
#include<lapack.h>
#include<armadillo>

int main(){
  // Initialize the random generator
      //arma::arma_rng::set_seed_random();
  
      // Create a 4x4 random matrix and print it on the screen
      arma::Mat<double> A;
      A(0,0)=3.0; A(1,0)=5.0;
      A(0,1)=1.0; A(1,1)=2.0;
      //A = arma::randu(4,4);
     std::cout << "A:\n" << A << "\n";
 
     // Multiply A with his transpose:
     //std::cout << "A * A.t() =\n";
     //std::cout << A * A.t() << "\n";
  return 0;

}