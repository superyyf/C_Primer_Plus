#include <stdio.h>

double computeCube(double n){
    return n*n*n;
}

int main(void){
    double num;
    printf("输入一个double类型的数：\n");
    scanf("%lf", &num);
    printf("立方值为%f\n", computeCube(num));
    return 0;
}