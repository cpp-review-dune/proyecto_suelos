//Determinar si una matriz es simétrica
#include <iostream>
#include <math.h>

int main(){
int num[100][100],filas,columnas;
char a,v;
    std::cout<<"Digite el número de filas: "<<std::endl;
    std::cin>>filas;
    std::cout<<"Digite el número de columnas: "<<std::endl;
    std::cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            std::cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            std::cin>>num[i][j];
                    }
            std::cout<<"\n";
    }

    if(filas==columnas){
        for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(num[i][j]==num[j][i])
            a=v;
        }
        }
    }
    if(a==v){
        std::cout<<"Es una matriz simétrica"<<std::endl;
    }
    else{
        std::cout<<"No es una matriz simetrica"<<std::endl;
    }
   
    return 0;
}