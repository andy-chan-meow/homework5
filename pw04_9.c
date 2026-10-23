#include <stdio.h>
int main(){
    double arr[8];
    double sum = 0.0;
    for ( int i = 0 ; i < 8 ; i++){
        scanf("%lf",&arr[i]);
    }
    for (int i = 0 ; i < 8 ; i++){
        if (arr[i] > 0){
            sum += arr[i];
        }
    }
    for (int i = 0 ; i < 8 ; i++){
        printf("%.2lf ",arr[i]);
    }
    printf("\n%.2lf", sum);
}
//индексация начинается с 0 потому что до начала массива 0 шагов