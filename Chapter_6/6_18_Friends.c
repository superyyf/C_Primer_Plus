#include <stdio.h>

#define DUNBAR 150

int main(void){
    int  friends = 5;
    int k = 0;
    while(friends <= DUNBAR){
        k++;
        friends -= k;
        friends *= friends;
    }
    printf("第%d周，朋友数量超过邓巴数\n");
    return 0;
}