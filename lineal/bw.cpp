#include <iostream>

double valor_u0(float x);


int main(){
 
  float x = 0;
  float c = 1.0;
  float delta_x = 0.01;
  float delta_t = 0.0001;
  float T = 0.5;
  int N_x = 2.0/delta_x + 1;
  int N_t = T/delta_t;
  double *u = new double[ N_x ];

    for(int t = 0; t<=N_t; t++){
        x = 0;
        for(int i=N_x; i>0; i--){
            if(t==0){
                u[i] = valor_u0(x);
                x += delta_x;
            }
            else{
                if((i!=0) || (i!=N_x - 1)){
                    u[i] = u[i] - c*(delta_t/delta_x)*(u[i] - u[i-1]) ;
                }
            }
  }
}
    x = 0;
    for(int i = 0; i<N_x; i++){
        std::cout << x << " " << u[i] << std::endl;
        x += delta_x;
    }
    return 0;
}
    

double valor_u0(float x){
    double u0 = 0.0;
    if((x>=0) && (x<=0.75)){
        return u0;
  }
    if((x>1.25) && (x<=2.0)){
     return u0;
  }
    if((x>0.75) && (x<=1.25)){
    u0 = 1.0;
  }
    return u0;
  }
