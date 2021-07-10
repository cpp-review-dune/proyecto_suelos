#include <iostream>

int main(){

    int vector[4]= {1,3,5,7};
    int suma = 0;
    int i;

    for (i=0; i<4; i++){

        suma += vector[i];

    }

    std::cout<<"La suma de los elementos del vector es:"<<suma<<std::endl;
    return 0;
}