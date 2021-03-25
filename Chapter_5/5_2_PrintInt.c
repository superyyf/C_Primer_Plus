#include <stdio.h>

int main(void){
    int num;
    printf("输入一个整数：\n");
    scanf("%d", &num);
    for(int i = 0; i < 11; i++){
        printf("%d\t", num+i);
    }
    return 0;
}