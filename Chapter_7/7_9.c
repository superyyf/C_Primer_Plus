#include <stdio.h>
#include <math.h>

int main(void){
    printf("输入一个正整数：\n");
    int num;
    while(scanf("%d", &num) != 1  || num <= 0){
            printf("输入一个正整数：\n");
            fflush(stdin);
    }

    printf("小于或等于%d的素数有：", num);
    for(int i = 1; i <= num; i++){
        int x = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if(i%j == 0){
                x++;
            }
        }
        if(x == 1){
            printf(" %d ",i);
        }
    }
    printf("\n");
    return 0;
}