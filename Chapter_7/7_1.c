#include <stdio.h>

int main(void){
    printf("输入字符：\n");
    char ch;
    int num1 = 0, num2 = 0, num3 = 0;
    while((ch = getchar()) != '#'){
        printf("*");
        switch (ch)
        {
            case ' ':
                num1++;
                break;
            case '\n':
                num2++;
                break;
            default:
                num3++;
                break;
        }
    }
    printf("空格数：%d\n换行符数：%d\n其他字符数：%d\n", num1, num2, num3);
    return 0;
}