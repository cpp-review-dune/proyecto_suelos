/*
Realizar un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
la matriz transpuesta es aquella en la que la columna i era la fila i de la matriz
original.
*/

#include <iostream>

int main(){

    int matriz1[3][3];
   

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout<<"Digite el valor que va en la fila "<<i<<" y la columna "<<j<<":  ";
            std::cin>>matriz1[i][j];
        }
    }

    std::cout<<"\n\nMatriz original:\n"<<std::endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            std::cout<<matriz1[i][j];

        }
        std::cout<<"\n";
    }


    //convertimos a matriz transpuesta

    std::cout<<"\n\nMatriz transpuesta:\n\n";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout<<matriz1[j][i];
        }

        std::cout<<"\n";
    }

    return 0;
}