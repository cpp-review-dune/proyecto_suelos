#include <iostream>
#include <vector>

int main(){

    int n = 5;

    std::vector<int> var1(n);
    for(int i= 0; i < n; i++)
        var1[i] = i;
    var1.push_back(4);

    for (int i= 0; i<n+1; i++)
        std::cout<<var1[i]<<" ";
    std::cout<<std::endl;

    for (int i = 0; i < var1.size(); i++)
        if (var1[i] % 2 == 0)
            std::cout << var1[i] << " ";
    std::cout << std::endl;

    // very general (also works for maps, sets,
    // lists, ...), but reeeally ugly
    for (std::vector<int>::const_iterator it
        = var1.begin(); it != var1.end(); ++it)
        if (*it % 2 == 0)
            std::cout << *it << " ";
    std::cout << std::endl;

    // C++11: fill using algo from <numeric> header
    std::iota(var.begin(),var.end(),0);
    
    return 0;
    
}