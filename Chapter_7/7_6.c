#include <stdio.h>

#define STOP '#'

int main(void){
    printf("输入字符：\n");
    int cur;
    int pre = 0;
    int num = 0;
    while((cur = getchar()) != STOP){
        if(pre == 'e' && cur == 'i'){
            num++;
        }
        pre = cur;
    }
    printf("ei出现了%d次\n", num);
}