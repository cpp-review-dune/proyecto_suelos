#include <iostream>


int main(){

    int n = 0;

    

    // C-style fixed-length array
    int fix[10] = {0,1,2,3,4,5,6,7,8,9};
    // "fix" doesn't know its own size
    for (int i = 0; i < 10; i++)
    if (fix[i] % 2 == 0)
    std::cout << fix[i] << " ";
    std::cout << std::endl;

    std::cout<<"please define value of end"<<std::endl;
    std::cin>>n;

    // C-style "variable-length" array
    int* var = new int[n];
    for (int i = 0; i < n; i++)
    var[i] = i;

    for(int i=0; i<n; i++){

        std::cout<<var[i]<<" ";


    }

    std::cout<<std::endl;

    for(int i=0; i<n; i++)
        std::cout<<*(var + i) <<" ";

    std::cout<<std::endl;    
    return 0;
}