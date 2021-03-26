#include <stdio.h>

int main(void){
    double money1 = 100.0, money2 = 100.0;
    int i = 0;
    while( money1 >= money2){
        i++;
        money1 += 100*0.1*i;
        money2 += money2*0.05;
    }
    printf("需要%d年，Deirdre的投资额会超过Daphne，Daphne：%f\tDeirdire:%f\n", i, money1, money2);
    return 0;
}