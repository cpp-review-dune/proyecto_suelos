#include <iostream>

double f(double t, double y); // Prototipo de funcion

int main(){
    
    float a, b, w, h, t, alpha; //definimos las variables que vamos a utilizar en este programa 
    int  N, i; // La i no va a ser como tal una variable del ejercicio sino que nos sirve como contador para un ciclo

    std::cout<<"Metodo de Euler"<<std::endl;

    //Ahora le asignaremos valores a las variables antes definidas

    a=0;
    b=2;
    w=0.5;
    N=10;
    t=a;
    h= (b-a)/N;

    std::cout<<"t="<<t<<"w="<<w<<std::endl;

    //Vamos a crear un ciclo for para que nos ayude con las operaciones repetitivas del programa 
    for (i=0;i<N;i++){

        w= w+h*f(t,w);
        t= t+h;

        std::cout<<"t="<<t<<"w="<<w<<std::endl;

    }

    return 0;
}

double f(double t, double y){

    return y - t*t + 1;

}