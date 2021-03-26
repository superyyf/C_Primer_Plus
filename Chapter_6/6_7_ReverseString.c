#include <stdio.h>
#include <string.h>

int main(void){
    printf("输入一个单词：\n");
    char str[20];
    scanf("%s", str);
    int length = strlen(str);
    for(int i = 0; i <= length; i++){
        printf("%c", str[length-i]);
    }
    printf("\n");
    return 0;
}