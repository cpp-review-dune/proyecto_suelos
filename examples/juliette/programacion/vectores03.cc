//Programa para determinar el mayor elemento de un vector
#include <iostream>

int main (){
int numero[100],n,mayor;

    std::cout<<"Digite el numero de elementos del vector: "<<std::endl;
    std::cin>>n;

for(int i=0;i<n;i++){
    std::cout<<i+1<<"Digite un número: "<<std::endl;
    std::cin>>numero[i];

    if(numero[i]>mayor){
        mayor = numero[i];
    }
    std::cout<<"El elemento de mayor número en el vector es: "<<mayor<<std::endl;

}

    return 0;
}