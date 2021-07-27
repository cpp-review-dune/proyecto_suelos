#include<iostream>
int main(){
    double a[3][3] = {3,2,3,4,5,6,7,8,9};
    double a1[3][3] = {3,2,3,4,5,6,7,8,9};
    double b = a[1][0]/a[0][0];
    std::cout.precision(3);
    int i,j;
    //std::cout<<"b = "<<b<<std::endl;
    //if (a[0][0]!=0){
        i=0;
        for(j=0;j<3;j++){
            a[i][j] = a[i][j]/a1[0][0];
        }
    //}
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            std::cout<<std::fixed<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}