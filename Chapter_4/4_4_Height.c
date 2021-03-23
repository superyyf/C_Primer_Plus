#include <stdio.h>

int main(void){
    float heigh;
    char name[20];
    printf("输入身高（厘米）和姓名：\n");
    scanf("%f%s", &heigh, name);
    printf("%s,you are %f m tall.\n", name, heigh/100);
    return 0;
}