#include <iostream>

int main(){

    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    //copiando los elementos del arreglo letras 1 a letras 3

    for(int i= 0; i<5; i++){

        letras3[i] = letras1[i];
    }

    //copiando los elementos de letras2 a letras3
    for(int i=5; i<10; i++){

        letras3[i]=letras2[i-5];
    }

    for(int i=0; i<10; i++){

        std::cout<<"El elemento numero "<<i+1<<" del vector es:"<<letras3[i]<<std::endl;
    }

    return 0;

}