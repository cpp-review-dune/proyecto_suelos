/* Hacer un programa para rellenar una matriz pidiendo al ususario el numero de filas y columnas, 
posteriromente mostrar la matriz en pantalla */

#include <iostream>


int main(){

    int filas, columnas;
    int matriz[100][100];

    std::cout<<"Por favor digite el numero de filas y columnas que quiere que tenga su matriz:"<<std::endl;
    std::cin>>filas;
    std::cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){

            std::cout<<"Digite el valor que va en la fila "<<i + 1<<" y la columna "<<j + 1<<std::endl;
            std::cin>>matriz[i][j];
        }
        
    }

    std::cout<<"\n";

    //Ahora mostramos la matriz en pantalla
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            std::cout<<matriz[i][j];

        }

        std::cout<<"\n";
    }
    return 0;
}