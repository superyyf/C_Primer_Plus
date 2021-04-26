#include <stdio.h>

#define STOP '#'
int main(void){
    int ch;
    int num = 0;
    printf("输入字符\n");
    while((ch = getchar()) != STOP) {
        if(ch == '.'){
            num++;
        }
        else if(ch == '!'){
            num++;
        }
        else{
            continue;
        }
    }
    printf("进行了%d次替换\n", num);
}