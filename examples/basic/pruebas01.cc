#include <iostream>
#include <math.h>

int main(){
///Probando la documentación
/**
* Texto anterior a la lista
* - item lista 1
* - sub item 1
* - sub sub item 1
* - sub sub item 2
13
* .
* El punto de arriba significa que termina la lista
* de sub sub items.
* Mas texto del primer sub item.
* .
* El punto de arriba termina la lista de sub items.
* Mas texto para el primer item de la lista.
* - sub item 2
* - sub item 3
* - list item 2
* .
* Mas texto en el mismo parrafo.
*
* Mas texto en un nuevo parrafo.
*/

    std::cout<<"Hola mundo!\n";
    int hour, minute;
    char colon;

    hour = 11;
    minute = 59;
    colon = ':';

    std::cout << "The current time is " << hour << colon << minute << std::endl;
    std::cout << 17 * 3<<std::endl;
    double pi=3.14159;
    int x = int (pi);
    std::cout<< "El valor redondeado de pi es "<< x<<std::endl;
    std::cout<< "Incluir una función\n";
    return 0;
}
