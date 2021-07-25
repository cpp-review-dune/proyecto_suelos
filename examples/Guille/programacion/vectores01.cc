//suma de vectores

#include <iostream>

int main(){

    int vector[4]= {1,3,5,7};
    int suma = 0;
    int i;

    for (i=0; i<4; i++){

        suma += vector[i];

    }

    std::cout<<"la suma de los elementos de nuestro vector es:"<<suma<<std::endl;


    return 0;
}