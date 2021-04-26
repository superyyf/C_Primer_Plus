#include <stdio.h>

int main(void){
    printf("输入字符：\n");
    char ch;
    int i = 1;
    while((ch = getchar()) != '#'){
        switch(ch){
            case ' ':
                printf("' '-%d ", 32);
                break;
            case '\n':
                printf("'\\n'-%d", 10);
                i = 1;
                break;
            default:
                printf("%c-%d ", ch, ch);
                break;
        }
        
        if(i%8 == 0){
            printf("\n");
        }
        i++;
    }
    return 0;
}