#include <iostream>

int main(){

    int numeros[50],n,i;

    std::cout<<"Digite el numero de elementos del vector: "<<std::endl;
    std::cin>>n;

    for (i=0;i<n;i++){
    std::cout<<"Digite un numero:";
    std::cin>>numeros[i];

    }

    for (i=0; i<n;i++){

        std::cout<<i<<"-->"<<numeros[i]<<std::endl;


    }



    return 0;
}