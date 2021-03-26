#include <stdio.h>

int main(void){
    printf("输入累加次数：\n");
    int n;
    
    while(scanf("%d", &n) == 1 && n > 0){
        double sum1 = 0.0, sum2 = 0.0;
        for(int i = 0; i < n; i++){
            sum1 += 1.0/(double)(i+1);
        }
        for(int i = 0; i < n; i++){
            if((i+1)%2 == 0){
                sum2 -= 1.0/(double)(i+1);
            }
            else{
                sum2 += 1.0/(double)(i+1);
            }
        }
        printf("经过%d次累加，sum1 = %f\tsum2 = %f\n", n, sum1, sum2);
        printf("输入累加次数：\n");
    }
    
    return 0;
}