//programa para hacer una matriz de 2*2 y luego copiarla hacia otra matriz
#include <iostream>
#include <math.h>

int main(){
    int num[2][2] = {2,4 , 5,7};
    int M2[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            M2[i][j]=num[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            std::cout<<M2[i][j];
        }
        std::cout<<"\n";
    }
    std::cout;

    return 0;
}