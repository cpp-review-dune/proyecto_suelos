#include <iostream>    // notwendig zur Ausgabe
#include "hdnum.hh"    // hdnum header

int main(){
    //hdnum :: DenseMatrix <float> B (10 ,10); 
    hdnum :: DenseMatrix <float> C (10 ,10 ,2.33); 
    
    //for(int i =0; i <B. rowsize (); ++ i )
        //for(int j =0; j <B. colsize (); ++ j )
           // B[i ][ j] = 1.33;
     

//std::cout<<"Matriz B :"<< B <<std::endl;
std::cout<<"Matriz C :"<< C <<std::endl;

return 0;

}