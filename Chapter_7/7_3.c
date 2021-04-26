#include <stdio.h>

int main(void){
    int num;
    int num_even = 0;
    int num_odd = 0;
    int sum_even = 0;
    int sum_odd = 0;
    printf("输入整数：\n");
    while(scanf("%d", &num) == 1){
        if(num == 0){
            break;
        }

        if(num % 2 == 0){
            num_even++;
            sum_even += num;
        }
        else{
            num_odd++;
            sum_odd += num;
        }

    }

    printf("偶数个数为%d,平均值为%d\n奇数个数为%d,平均值为%d\n", num_even, sum_even/num_even, num_odd, sum_odd/num_odd);
}