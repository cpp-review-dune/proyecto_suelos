//Este programa es utilizado para mostrar los elemnetos de un vector
#include <iostream>

int main (){

int numeros[50],n;

    std::cout<<"Digite el numero de elementos que va a tener el vector: "<<std::endl;
    std::cin>>n;
for (int i=0;i<n;i++){
    std::cout<<"Digite un numero: "<<std::endl;
    std::cin>>numeros[i];
}

for (int i=0;i<n;i++){
    std::cout<<i<<" --> "<<numeros[i]<<std::endl;
}




    return 0;
}
