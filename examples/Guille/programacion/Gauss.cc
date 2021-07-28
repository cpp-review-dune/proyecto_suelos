
#include <iostream>

int main(){

    int i=0;
    std::cout.precision(3);
    double matriz[3][3] = {{3,7,4},{9,5,2},{6,2,1}};
    double matriz2[3][3] = {{3.0,7.0,4.0},{9.0,5.0,2.0},{6.0,2.0,1.0}};

    
    if(matriz2[0][0] != 0){
        
        
        for(int j=0; j<3; j++){
            //3/3 Matriz[0][0]=3 
            matriz2[i][j]= matriz2[i][j] / matriz[0][0];
            std::cout<<std::fixed<<matriz2[i][j]<<std::endl;
        }
       
    }

    
    for(int j=0; j<3; j++){
        matriz2[i+1][j] = matriz2[i+1][j] - (matriz2[i][j]*matriz[1][0]);
        std::cout<<std::fixed<<matriz2[i+1][j]<<std::endl;
    }

    
    for(int j=0; j<3; j++){
        matriz2[i+2][j] = matriz2[i+2][j] - (matriz2[i][j]*matriz[2][0]);
        std::cout<<std::fixed<<matriz2[i+2][j]<<std::endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz[i][j] = matriz2[i][j];

        }

    }

    if(matriz2[1][1] != 0){
        
        int i = 1;
        for(int j=0; j<3; j++){
            //3/3 Matriz[0][0]=3 
            matriz2[i][j]= matriz2[i][j] / matriz[1][1];
            std::cout<<std::fixed<<matriz2[i][j]<<std::endl;
        }
       
    }

    for(int j=0; j<3; j++){
        matriz2[i+2][j] = matriz2[i+2][j] - (matriz2[i+1][j]*matriz[2][1]);
        std::cout<<std::fixed<<matriz2[i+2][j]<<std::endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz[i][j] = matriz2[i][j];

        }

    }

    if(matriz2[2][2] != 0){
        
        int i = 2;
        for(int j=0; j<3; j++){
            //3/3 Matriz[0][0]=3 
            matriz2[i][j]= matriz2[i][j] / matriz[2][2];
            std::cout<<std::fixed<<matriz2[i][j]<<std::endl;
        }
       
    }

    std::cout<<"\n\n"<<std::endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout<<matriz2[i][j]<<"   ";

        }

        std::cout<<"\n";
    }


    return 0;
}