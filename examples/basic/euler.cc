#include <iostream>
double f(double t,double y);
int main(){
    std::cout<<"Método de Euler\n";
    int N;
    double alpha;
    double a,b,h,w,t;
    a = 0; b = 2; alpha = 0.5; N = 3; t = a;
    w = alpha; h=0.5; //h = (b-a)/N;
    std::cout<<"t = "<<t<<" w= "<<w<<std::endl;
    for (int i=0;i<N;i++){
        w = w+h*f(t,w);
        //w = w-t*t+1;
        t = t+h;
        std::cout<<"t= "<<t<<" w= "<<w<<std::endl;

    }
}
double f(double t,double y){
    return y-t*t+1;
}
