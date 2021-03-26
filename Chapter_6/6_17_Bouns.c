#include <stdio.h>

int main(void){
    double money = 100.0;
    int k = 0;
    while(money > 0){
        k++;
        money += money*0.08;
        money -= 10;
    }
    printf("%d年后Chuckie会取完账户的钱\n");
    return 0;
}