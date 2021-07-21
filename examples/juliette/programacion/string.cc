#include <iostream>
#include <math.h>
#include <stdio.h>

int main (){
std::string nombre,apellido;

  std::cout << "¿Cómo te llamas?" ;
  getline (std::cin, nombre);
  std::cout << nombre <<std::endl;
  std::cout << "¿Cual es tu apellido?" ;
    getline (std::cin, apellido);
  std::cout << apellido <<std::endl;

    return 0;
}