#include <iostream>
#include <stdio.h>
#include <fstream>

double promX(double *x,int n);

int main()
{
double *x, prom;
FILE *archDat, *archRes;
int n, i;
archDat = fopen("ldatos1.txt", "r");
if( archDat == NULL ){
printf("\n\n Archivo inexistente.\n\n");
exit (1) ;
}
fscanf(archDat,"%d",&n);
x = new double[n];
if ( x == NULL ){
printf("\n\n Memoria insuficiente.\n\n");
exit(1);
}
for( i=0; i<n; i++) {
    fscanf(archDat,"%lf",&x[i]);
    }
fclose (archDat);
archRes = fopen("ejemplo.res", "w");
prom = promX(x,n);
fprintf (archRes, "El promedio es: %12.4lf\n ", prom);
fclose(archRes);
return 0;
}
double promX(double *x,int n){
    int i;
    double suma = 0.0;
    for(i = 0;i<n;i++){
        suma += *(x+i);
    }
    return suma/n;
}