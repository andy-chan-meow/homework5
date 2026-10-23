#include <stdio.h>
int main(){
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            if (i == j || i + j == 4){
                printf("x");
            }else{
                printf(" ");
            }
                   }
                   printf("\n");
    }
}
/*
(0,0) (0,4)
(1,1) (1,3)
(2,2)
(3,1) (3,3)
(4,0) (4,4)
*/