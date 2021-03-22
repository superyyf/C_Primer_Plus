#include <stdio.h>

int main(void){
    char first_name[20], last_name[20];
    printf("请输入姓和名（拼音）：\n");
    scanf("%s%s", first_name, last_name);
    printf("%s%s你好!\n", first_name, last_name);
    return 0;
}