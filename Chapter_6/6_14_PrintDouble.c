#include <stdio.h>

int main(void){
    double d1[8], d2[8];
    for(int i = 0; i < 8; i++){
        printf("输入第%d个数(double)：\n", i+1);
        if(scanf("%lf", &d1[i]) != 1){
            printf("error!\n");
            return 0;
        }
    }
    double sum = 0.0;
    for(int i = 0; i < 8; i++){
        sum += d1[i];
        d2[i] = sum;
    }
    for(int i = 0; i < 8; i++){
        printf("%f\t", d1[i]);
    }
    printf("\n");
    for(int i = 0; i < 8; i++){
        printf("%f\t", d2[i]);
    }
    printf("\n");
    return 0;
}