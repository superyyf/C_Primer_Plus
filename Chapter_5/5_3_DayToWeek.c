#include <stdio.h>
#include <stdbool.h>

int main(void){
    int days;
    while(true){
        printf("输入天数：\n");
        scanf("%d", &days);
        if(days <= 0) break;
        if(days/7 != 0){
            printf("%d周", days/7);
        }

        if(days%7 != 0){
            printf("%d天\n", days%7);
        }
        else{
            printf("\n");
        }
    }

    return 0;
}