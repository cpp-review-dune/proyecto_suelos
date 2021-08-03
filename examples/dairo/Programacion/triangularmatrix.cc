#include <iostream>


int main(){
	

	int n,i,j,k;
	
    std::cout.precision(3);
	std::cout<<"digite el tamaño de la matriz \n";
	std::cin>>n;
	
	float A[n][n];
	float aux, rebote, rebote1,determinante=1;
	
    std::cout<<"digite los datos de la matriz\n";
	
		for (i=0; i<n ; i++)
			for (j=0; j<n; j++)
			{
                std::cout<<"Dato["<<i<<"]["<<j<<"]: ";
                 std::cin>>A[i][j];				
			              
            }	
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

        for (i=0;i<n;i++){
            determinante*= A[i][i];
        }

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