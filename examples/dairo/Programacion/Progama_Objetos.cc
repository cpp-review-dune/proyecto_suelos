#include<iostream>
Class Rectangulo (
    private: // Definido como atributo
        float largo,ancho;
    public: // Definido como metodo 
        Rectangulo(float,float); // definido como constructor
        void (perimetro);
        void (area);  
);

Rectangulo:: Rectangulo(float_largo, float_ancho){
    largo=_largo;
    ancho=_ancho;

}

void Rectangulo::perimetro(){
    float_perimetro;

    _perimetro = (2*largo) + (2*ancho);

    std::cout<<"el perimetro es "<<_perimetro<<std::endl;

}

void Rectangulo::area(){
    _area = largo*ancho;
    std::cout<<"el area es "<<_area<<std::endl;

}
int main(){
    Rectangulo r1(11,7);

    r1.perimetro();
    r1.area();

return 0;

}