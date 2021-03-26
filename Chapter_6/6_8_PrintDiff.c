#include <stdio.h>

int main(void){
    double a, b;
    printf("输入两个浮点数：\n");
    while(scanf("%lf%lf", &a, &b) == 2){
        printf("%f\n", (a-b)/(a*b));
        printf("输入两个浮点数：\n");   
    }
    return 0;
}