//Suma de vectores
#include <iostream>
int main(){

int numeros [4]= {1,2,3,4};
int suma= 0;

for (int i=0;i<4;i++){
    suma += numeros[i];

}

    std::cout<<"La suma de los elementos de los vector es: "<<suma <<std::endl;
 
    return 0;
}