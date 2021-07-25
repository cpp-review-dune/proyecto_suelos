//programa para leer una matriz de 3*3 y crear su matriz traspuesta
#include <iostream>
#include <math.h>

int main(){
    int num[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        std::cout<<"digite un número ["<<i<<"]"<<"["<<j<<"]: ";
        std::cin>>num[i][j];
        }
    }
    std::cout<<"Matriz original"<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<num[i][j];
        }
        std::cout<<"\n";
    }

    std::cout<<"La matriz traspuesta es: "<<std::endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        std::cout<<num[j][i];
        }
        std::cout<<"\n";
    }
    return 0;
}