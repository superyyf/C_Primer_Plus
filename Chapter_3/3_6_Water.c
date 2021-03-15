#include<stdio.h>

int main(void){
    float weightOfWater = 3.0e-23;
    float waterPerQuart = 950.0;
    float numOfQuart;
    printf("请输入水的夸脱数：\n");
    scanf("%f",&numOfQuart);
    printf("有%e个水分子",numOfQuart*waterPerQuart/weightOfWater);
    return 0;
}