#include <stdio.h>

int main(void){
    char ch[26];
    for(int i = 0; i < 26; i++){
        ch[i] = 'a' + i;
        printf("%c\n", ch[i]);
    }
    return 0;
}