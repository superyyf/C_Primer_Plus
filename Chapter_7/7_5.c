#include <stdio.h>

#define STOP '#'
int main(void){
    int ch;
    int num = 0;
    printf("输入字符\n");
    while((ch = getchar()) != STOP) {
        switch(ch){
            case '.':
                num++;
                break;
            case '!':
                num++;
                break;
            default :
                break;
        }
    }
    printf("进行了%d次替换\n", num);
}