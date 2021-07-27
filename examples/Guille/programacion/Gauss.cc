
#include <iostream>

int main(){
    std::cout.precision(3);
    double matriz[3][3] = {{3,7,4},{9,5,2},{6,2,1}};
    double matriz2[3][3] = {{3.0,7.0,4.0},{9.0,5.0,2.0},{6.0,2.0,1.0}};

    
    if(matriz2[0][0] != 0){
        
        int i=0;
        int j=0;
        do{
            //3/3 Matriz[0][0]=3 
            matriz2[i][j]= matriz2[i][j] / matriz[0][0];
            std::cout<<std::fixed<<matriz2[i][j]<<std::endl;
            j++;
        }while(j<3);

    }

    return 0;
}