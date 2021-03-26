#include <stdio.h>

int main(void){
    int num[8];
    for(int i = 0; i < 8; i++){
        printf("输入第%d个整数：\n", i+1);
        scanf("%d", &num[i]);
    }
    printf("倒序显示：");
    for(int i = 0; i < 8; i++){
        printf("%d\t", num[8-i-1]);
    }
    printf("\n");
    return 0;
}