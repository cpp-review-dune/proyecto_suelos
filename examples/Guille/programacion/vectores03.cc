//Determinar el mayor elemento de un vector

#include <iostream>


int main(){

    int numeros [100],i,n,mayor;

    std::cout<<"Digite el numero de elementos del vector:";
    std::cin>>n;

    for(i=0; i<n; i++){

        std::cout<<i+1<<"Digite un numero:";
        std::cin>>numeros[i];

        if (numeros[i] > mayor){
            
            mayor = numeros[i];
        }
    }

    std::cout<<"El numero mayor es:"<<mayor<<std::endl;



    return 0;
}