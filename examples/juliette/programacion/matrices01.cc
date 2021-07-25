//Programa interactivo para rellenar una matriz colocando el numero de filas y columnas
#include <iostream>
#include<math.h>

int main(){
    int num[100][100],filas,columnas;

    std::cout<<"Digite el número de filas que va a tener la matriz: "<<std::endl;
    std::cin>>filas;
    std::cout<<"Digite el número de columnas que va a tener la matriz: "<<std::endl;
    std::cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
        std::cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
        std::cin>>num[i][j];
        }
    }
        for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            std::cout<<num[i][j];
        }
        std::cout<<"\n";
        }
    return 0;
}