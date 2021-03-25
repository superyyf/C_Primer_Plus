#include <stdio.h>

int main(void){
    int first, second;
    printf("输入求模运算的第二个运算对象：\n");
    scanf("%d", &second);
    printf("输入求模运算的第一个运算对象：\n");
    scanf("%d", &first);
    while(first > 0 && second > 0){
        printf("%d %% %d = %d\n", first, second, first%second);
        printf("输入求模运算的第二个运算对象：\n");
        scanf("%d", &second);
        printf("输入求模运算的第一个运算对象：\n");
        scanf("%d", &first);
    }
    return 0;
}