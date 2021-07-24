#include<iostream>
#include <vector>
int main(){
    std::vector<int> count(4,0);
    std::vector<double> doubleVector;
    count[0]=8;
    count[1]=count[0]*2;
    count[2]++;
    count[3]-=60;
    int i = 0;
    while (i < 4) {
        std::cout << count[i] << std::endl;
        i++;
    }
    return 0;
}
