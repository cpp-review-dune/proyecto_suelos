#include <iostream>
#include <stdio.h>

int main(){

    std::string nombre, apellido;

    std::cout<<"¿Como te llamas?";
    getline (std::cin, nombre);
    std::cout<<nombre<<std::endl;
    std::cout<<"¿Cual es tu pellido?";
    getline (std::cin, apellido);
    std::cout<<apellido<<std::endl;

    return 0;
}