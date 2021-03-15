#include<stdio.h>

int main(void){
    float cmPerInch = 2.54;
    float inch;
    printf("请输入身高（英寸）\n");
    scanf("%f",&inch);
    printf("身高为%.2f厘米\n",inch*cmPerInch);
    return 0;
}