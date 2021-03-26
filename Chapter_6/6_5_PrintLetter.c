#include <stdio.h>

int main(void){
    printf("输入一个大写字母：\n");
    char ch1, ch2;
    scanf("%c", &ch1);
    for(int i = 0; i <= ch1-'A'; i++){
        for(int j = 0; j <=i; j++){
            ch2 = 'A'+j;
            printf("%c", ch2);
        }
        for(int j = 1; j <= i; j++){
            printf("%c", ch2-j);
        }
        printf("\n");
    }
    return 0;
}