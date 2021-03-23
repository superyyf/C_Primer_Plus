#include <stdio.h>
#include <string.h>

int main(void){
    char first_name[20], last_name[20];
    printf("输入姓和名：\n");
    scanf("%s%s", first_name, last_name);
    printf("%s\t%s\n%*d\t%*d\n", first_name, last_name, strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
    printf("%s\t%s\n%-*d\t%-*d\n", first_name, last_name, strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));

    return 0;
}