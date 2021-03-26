#include <stdio.h>

int main(void){
    int num[8];
    for(int i = 0; i < 8; i++){
        num[i] = 2;
        for(int j = 0; j < i; j++){
            num[i] *= 2;
        }
    }
    int i = 0;
    do{
        printf("2^%d = %d\n", i+1, num[i]);
        i++;
    }while(i < 8);
    
    return 0;
}