#include <stdio.h>

int getSquares(int a, int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        sum += i*i;
    }
    return sum;
}
int main(void){
    printf("输入上限整数和下限整数：\n");
    int a, b;
    while(scanf("%d%d", &a, &b) == 2 && a < b){
        printf("平方和：%d\n", getSquares(a,b));
        printf("输入上限整数和下限整数：\n");
    }
    return 0;
}