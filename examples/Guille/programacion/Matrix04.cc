//Realizar un programa que determine si una matriz es simetrica o no

#include <iostream>

int main(){

    int matriz1[100][100], filas, columnas;
    char bandera = 'F';

    std::cout<<"Digite el numero de filas: "; 
    std::cin>>filas;
    std::cout<<"Digite el numero de columnas: "; 
    std::cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j; j<columnas; j++){
            std::cout<<"Digite el valor que va a ir en la fila "<<i<<" y la columna "<<j<<":  ";
            std::cin>>matriz1[i][j];
        }
    }

    if(filas == columnas){
        for(int i=0; i<filas; i++){
            for(int j; j<columnas; j++){
                if(matriz1[i][j] == matriz1[j][i]){
                    bandera = 'V';
                }
            }
        }
    }

    if(bandera == 'V'){

        std::cout<<"La matriz es simetrica"<<std::endl;
    }

    else{
        std::cout<<"La matriz no es simetrica"<<std::endl;
    }

    return 0;
}