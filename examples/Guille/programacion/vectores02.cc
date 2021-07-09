//Este programa va a mostrar elementos de un vector

#include <iostream>

int main(){

    int numeros[50],n,i;

    std::cout<<"Digite el numero de elementos que va a tener el vector: "<<std::endl;
    std::cin>>n;

    for (i=0;i<n;i++){
    std::cout<<"digite un numero:";
    std::cin>>numeros[i];

    }

    for (i=0; i<n;i++){

        std::cout<<i<<"-->"<<numeros[i]<<std::endl;


    }



    return 0;
}