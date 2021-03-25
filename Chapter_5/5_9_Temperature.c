#include <stdio.h>

void Temperatures(double *tem1, double *tem2, double *tem3){
    const double p1 = 5.0;
    const double p2 = 9.0;
    const double p3 = 32.0;
    const double p4 = 273.16;
    *tem2 = p1 / p2 * ( *tem1 - p3);
    *tem3 = *tem2 + p4;
}

int main(void){
    printf("输入温度（华氏温度）：\n");
    double tem1, tem2, tem3;
    while(scanf("%lf", &tem1) == 1){
        Temperatures(&tem1, &tem2, &tem3);
        printf("摄氏温度为%.2f °C\t绝对温度为%.2f K\n", tem2, tem3);
        printf("输入温度（华氏温度）：\n");
    }
    return 0;


}