#include <iostream>


int main(){
	int n,i,j,k;
	
    //digitar el tamaño de la matriz 
    std::cout.precision(3);
	std::cout<<"digite el tamaño de la matriz \n";
	std::cin>>n;
	
    // se nombra la matriz y sus variables
	float A[n][n];
	float aux, rebote, rebote1,determinante=1;
	
    std::cout<<"digite los datos de la matriz\n";

       //se recorren las filas y columnas de la matriz, asignando cada dato ingresado a las variables i Y j 
		for (i=0; i<n ; i++)
			for (j=0; j<n; j++)
			{
                std::cout<<"Dato["<<i<<"]["<<j<<"]: ";
                 std::cin>>A[i][j];				
			              
            }	
        // se realizan las operaciones de reduccion en columnas y filas a 0 despreciando los datos que son denominados PIVOTES o REBOTES
        for (i=0;i<n;i++)
        {
            rebote = A[i][i];
            for (j=i+1; j<n; j++)
            {
                rebote1= A[j][i];
                aux= rebote1/rebote;
                for (k=0; k<n; k++)
                A[j][k]= A[j][k]-aux*A[i][k];           
                
            } 
        }
        // Con este ciclo se calcula el determinante de la matriz, multiplicando los valores de su diagonal
        for (i=0;i<n;i++){
            determinante*= A[i][i];
        }
        // con este ciclo se muestra el contenido de la matriz y su determinante.
    	for (i=0;i<n ;i++){
			for (j=0; j<n; j++)
			{
			 std::cout<<"   "<<A[i][j]<<"   ";
            }       
            std::cout<<"\n";
       }
         std::cout<<"el determinante de la matriz es: "<<determinante<<std::endl;      
      
    return 0;
}