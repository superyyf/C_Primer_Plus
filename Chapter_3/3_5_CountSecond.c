#include<stdio.h>

int main(void){
    float sec = 3.156e7;
    int age;
    printf("输入你的年龄：\n");
    scanf("%d",&age);
    printf("你活了%e秒\n",sec*age);
    return 0;
}