#include<iostream>
#include <vector>
int main(){
    std::vector<int> count(4,0);
    std::vector<double> doublevector;
    count[0]=8;
    count[1]=count[0]*2;
    count[2]++;
    count[3]-=60;
    int i = 0;
    while (i < 4) {
        std::cout << count[i] << std::endl;
        i++;
    }
    //otra forma de imprimir los vectores
    for (int i = 0; i < 4; i++) {
        std::cout << count[i] << std::endl;
    }
    //dejando que lea hasta el final del vector
    int j;
    for (auto j=count.begin();j!=count.end();j++)
        std::cout<<*j<<"  ";
    std::cout<<std::endl;
    std::vector<int> g1;
    //va colocando el valor al final, y aumenta el índice
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    std::cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        std::cout << *i << " ";
    return 0;
}
