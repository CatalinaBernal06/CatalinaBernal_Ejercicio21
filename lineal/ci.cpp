#include <iostream>

double valor_u0(float x);

int main(){
    
    float x = 0;
    float c = 1.0;
    float delta_x = 0.1;
    float delta_t = 0.01;
    float T = 0.5;
    int N_x = 2.0/delta_x + 1;
    int N_t = T/delta_t;

    for(int i=0; i<N_x; i++){
        
        std::cout  << x << " " << valor_u0(x) << std::endl;
        x += delta_x;
    }
}


double valor_u0(float x){
    double u0;
    if((x>=0) && (x<=0.75)){
        u0 = 0.0;
    }
    if((x>1.25) && (x<=2.0)){
        u0 = 0.0;
    }
    if((x>0.75) && (x<=1.25)){
        u0 = 1.0;
    }
    return u0;
}
