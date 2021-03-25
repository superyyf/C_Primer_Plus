#include <stdio.h>

int main(void){
    int count, sum;
    count = 0;
    sum = 0;
    int days;
    printf("输入天数：\n");
    scanf("%d", &days);
    while(days >= 0 && count++ < days)
    sum = sum + count * count;
    printf("sum = %d\n", sum);
    return 0;

}