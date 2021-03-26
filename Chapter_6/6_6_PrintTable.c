#include <stdio.h>

int main(void){
    printf("输入下限和上限：\n");
    int up, down;
    if(scanf("%d%d", &down, &up) != 2 || up < down){
        printf("输入有误\n");
        return 0;
    }
    for(; down <= up; down++){
        printf("%d\t%d\t%d\n", down, down*down, down*down*down);
    }
    return 0;
}