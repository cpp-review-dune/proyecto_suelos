#include <iostream>
   double f(double t, double y);
    int main(){
        float a, b, w, h, t, alpha;
        int N, i;
        std::cout<<"metodo Euler"<<std::endl;
        
        a=0; b=2;  w=0.5; N=10; t=a;
        h=(b-a)/N;
        std::cout<<"t="<<t<<"w="<<w<<std::endl;
        for (i=0;i<N;i++){
            w= w+h*f(t,w);
            t=t+h;
            std::cout<<"t="<<t<<"w="<<w<<std::endl;
        }

    return 0;
    }
    double f(double t, double y){
        return y - t*t + 1;
    }