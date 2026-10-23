#include <stdio.h>
double calc(double a, double b){
    return (a * a * a + b * b * b) / (a + b);
}
int main(){
    double a, b; //double точнее 
    printf("Enter a & b: ");
    while(scanf("%lf %lf", &a ,&b) == 2){
            printf("J = %.4lf\n", calc(a,b));
            printf("Enter a & b: ");
    }
    return 0;
    //return мгновенно останавливает работу текущей функции и передает вычисленный результат в вызывающую
}