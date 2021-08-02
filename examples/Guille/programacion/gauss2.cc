#include <iostream>

int main(){

    
    std::cout.precision(3);
    int m = 3; //rows
    int n = 3; //columns
    double matriz[m][n] = {{3,7,4},{9,5,2},{6,2,1}};
    double matriz2[m][n] = {{3.0,7.0,4.0},{9.0,5.0,2.0},{6.0,2.0,1.0}};

    std::cout<<" Matriz original "<<std::endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    int i=0; int j;
    if(matriz2[i][0] != 0){   
        for(j=0; j<m; j++){
            //3/3 Matriz[0][0]=3 
            matriz2[i][j]= matriz2[i][j] / matriz[i][0];
        }      
    }
    //for (i = 1;i<m;i++){
        i = 1; j= 1;
        double a= matriz[i][j-1];
        for(j = 0;j<n;j++){
            matriz2[i][j]-=a*matriz2[i-1][j];
        }
    //}
    std::cout<< "Matriz modificada "<<std::endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cout<<matriz2[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
   /* 
    for(int j=0; j<3; j++){
        matriz2[i+1][j] = matriz2[i+1][j] - (matriz2[i][j]*matriz[1][0]);
        
    }

    
    for(int j=0; j<3; j++){
        matriz2[i+2][j] = matriz2[i+2][j] - (matriz2[i][j]*matriz[2][0]);
        
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
            
        }
       
    }

    for(int j=0; j<3; j++){
        matriz2[i+2][j] = matriz2[i+2][j] - (matriz2[i+1][j]*matriz[2][1]);
        
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
            
        }
       
    }

    std::cout<<"\n\n"<<std::endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            std::cout<<matriz2[i][j]<<"   ";

        }

        std::cout<<"\n";
    }

*/
    return 0;
}