#include <stdio.h>

int main(void){
    printf("输入身高（厘米）：\n");
    float h;
    scanf("%f", &h);
    while(h > 0){
        printf("%fcm = %ffeet = %finches\n", h, 0.0328*h, 0.3937*h);
        printf("输入身高（厘米）：\n");
        scanf("%f", &h);
    }

    return 0;
}