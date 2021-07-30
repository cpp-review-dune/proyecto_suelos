#include<iostream>

int main()
{
    int vec[5]={10,20,30,40,50};
    int *pe;
    int f;
    pe=vec;
    for(f=0;f<5;f++)
    {
        std::cout<<*pe+1<<" ";
    }
    std::cout<<std::endl;
//    getch();
    return 0;
}
