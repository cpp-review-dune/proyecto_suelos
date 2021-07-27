#include <iostream>

int main (){

    std::cout.precision(3);
    double matriz1[3][3] = {{2.0,3.0,5.0},{9.0,5.0,2.0},{6.0,2.0,1.0}};
    double matriz2[3][3] = {{2.0,3.0,5.0},{9.0,5.0,2.0},{6.0,2.0,1.0}};

    
    if (matriz2[0][0] =! 0){

        int i=0;
        for ( int j=0; j<3; j++){
            matriz2[i][j]= matriz2[i][j]/matriz1[0][0];
            std::cout<<std::fixed<<matriz2[i][j]<<std::endl;
        }

    }
return 0;
}

