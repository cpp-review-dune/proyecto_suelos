/*
Hacer una matriz de tipo entera 2 * 2, llenarla de numeros
y luego copiar todo su contenido hacia otra matriz
*/

#include <iostream>

int main(){

    int matriz1[2][2] = {1,2,3,4}; 
    int matriz2[2][2];

    //pasando el contenido de numeros hacia matriz2
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matriz2[i][j] = matriz1[i][j];

        }

    }

    //Mostrando matriz2
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            std::cout<<matriz2[i][j];

        }
        std::cout<<"\n";
    }
    return 0;

}