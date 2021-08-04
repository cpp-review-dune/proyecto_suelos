#include <iostream>

int main ()
{
    int i,j,k,n;

    std::cout<<"introduzca el tamaño de la matriz nxn";
    std::cin>>n;

    float A[n][n], I[n][n], rebote, aux;

        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
             {
                std::cout<<"Dato["<<i<<"]["<<j<<"]: ";
                 std::cin>>A[i][j];
                    I[i][j]=0;

                    if (j==i)
                    I[i][j]=1;

             }

        for (i=0;i<n;i++){
                    for(j=0;j<n;j++)
                    {
                       std::cout<<"   "<<A[i][j]<<"   ";       
                    }
        std::cout<<"\n";
        }   

             
        for (i=0;i<n;i++){
                    for(j=0;j<n;j++)
                    {
                       std::cout<<"   "<<I[i][j]<<"   ";       
                    }
        std::cout<<"\n";
        }    
return 0;

}
