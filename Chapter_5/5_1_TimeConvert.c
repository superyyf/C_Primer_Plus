#include <stdio.h>
#include <stdbool.h>
#define Hour 60

int main(void){
    int min;
    while(true){
        printf("输入分钟数：\n");
        scanf("%d", &min);
        if(min <= 0)
            break;
        printf("%d小时%d分钟\n", min/Hour, min%Hour);
    }
    return 0;
    
}