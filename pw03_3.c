#include <stdio.h>
int main(){
    int N;
    double sum = 0.0;
    while(scanf("%d",&N) == 1){
        if (N <= 0){
            break;
        }
        for (int i = 1 ; i < N+1 ; i++){
            sum += (1.0/(i*i*i));
            
        }
         
        printf("sum (1/i^3) 1 to %d: %lf\n", N, sum);
        sum = 0.0;
    }
    return 0;
}