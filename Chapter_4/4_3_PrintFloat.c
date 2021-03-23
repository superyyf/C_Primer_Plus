#include <stdio.h>

int main(void){
    float f;
    printf("输入一个浮点数：\n");
    scanf("%f", &f);
    printf("小数点记法：%f\n", f);
    printf("指数记法：%e\n", f);
    return 0;
}