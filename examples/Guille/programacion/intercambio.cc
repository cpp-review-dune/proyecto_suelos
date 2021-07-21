#include <iostream>

void change(int &a, int &b);


int main(){

    int a, b;
    a = 5; b=7;
    std::cout<<"a = "<<a<<" b = "<< b<<std::endl;

    change(a, b);
    std::cout<<"a = "<<a<<" b = "<< b<<std::endl;

    

    return 0;
}

void change(int &a , int &b){

    int tmp;
    tmp = a; a = b; b =tmp;

}