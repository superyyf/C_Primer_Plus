#include <stdio.h>

double function(double a, double b){
    return (a-b)/(a*b);
}

int main(void){
    double a, b;
    printf("输入两个浮点数：\n");
    while(scanf("%lf%lf", &a, &b) == 2){
        printf("%f\n", function(a,b));
        printf("输入两个浮点数：\n");   
    }
    return 0;
}