#include <stdio.h>
#include <string.h>

int main(void){
    printf("输入一行字符：\n");
    char str[255];
    gets(str);
    int size = strlen(str);
    for(int i = 0; i < size; i++){
        printf("%c", str[size-i-1]);
    }
    printf("\n");
    return 0;
}