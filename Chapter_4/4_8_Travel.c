#include <stdio.h>

#define GallonToLiter 3.785
#define MileToKm 1.609

int main(void){
    float mile, gallon;
    printf("输入里程数（英里）和消耗汽油量（加仑）：\n");
    scanf("%f%f", &mile, &gallon);
    printf("汽车油耗为%.1f英里每加仑\n", mile/gallon);
    printf("汽车油耗为%.1f升/100公里\n", gallon*GallonToLiter/(mile*MileToKm)*100);

    return 0;

}