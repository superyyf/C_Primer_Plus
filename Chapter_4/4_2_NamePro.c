#include <stdio.h>
#include <string.h>

int main(void){
    char first_name[20], last_name[20];
    printf("输入姓和名（拼音）：\n");
    scanf("%s%s", first_name, last_name);
    printf("\"%s%s你好！\"\n", first_name, last_name);
    printf("\"%10s%10s你好！\"\n", first_name, last_name);
    printf("\"%-10s%-10s你好！\"\n", first_name, last_name);
    printf("\"%*s%*s你好！\"\n", strlen(first_name)+3, first_name, strlen(last_name)+3, last_name);

    return 0;

}