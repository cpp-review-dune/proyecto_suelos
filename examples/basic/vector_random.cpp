#include<iostream>
#include<stdlib.h>
#include<vector>
/************************************/
/*std::vector<int> randomVector (int n, int upperBound) {
  std::vector<int> vec (n);
  for (int i = 0; i<std::vec.size(); i++) {
    std::vec[i] = random () % upperBound;
  }
  return std::vec;
}*/
void printVector (const std::vector<int>& vec) {
  int i;
  for (i = 0; i<vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
}
int main(){
    int numValues = 20;
    int upperBound = 10;
    std::vector<int> vec;
    std::cout<<"Imprimiendo el vector\n"
    for (int i = 0; i<vec.size(); i++) {
        vec[i] = random () % upperBound;
        std::cout<<vec[i];
    }
    //std::vector<int> vector = randomVector (numValues, upperBound);
    printVector (vec);

    return 0;
}