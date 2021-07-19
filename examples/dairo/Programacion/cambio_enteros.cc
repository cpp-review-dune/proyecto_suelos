#include<iostream>
void print(int a,int b){
std::cout<<"El valor de a es "<<a<<" y el de b es "<<b<<std::endl;
}
void change(int &a,int &b){
int temp;
temp = a;
a = b;
b = temp;
}
int main(){
std::cout<<"Programa para intercambiar dos enteros\n";
int a,b,temp;
a = 5;
b = 7;
print(a,b);
change(a,b);
print(a,b);
return 0;
}