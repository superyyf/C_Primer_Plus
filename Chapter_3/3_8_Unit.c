#include<stdio.h>

int main(void){
    float cupsPerPint = 2.0;
    float ouncesPerCup = 8.0;
    float tablespoonsPerOunce = 2.0;
    float teaspoonsPerTs = 3.0;
    float cups;
    printf("输入杯数：\n");
    scanf("%f", &cups);
    printf("等价于%f品脱\n", cups/cupsPerPint);
    printf("等价于%f盎司\n", cups*ouncesPerCup);
    printf("等价于%f汤勺\n", cups*ouncesPerCup*tablespoonsPerOunce);
    printf("等价于%f茶勺\n", cups*ouncesPerCup*tablespoonsPerOunce*teaspoonsPerTs);

    return 0;
}