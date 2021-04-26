#include <stdio.h>
#include <stdbool.h>

#define START_POINT_1 17850
#define START_POINT_2 23900
#define START_POINT_3 29750
#define START_POINT_4 14875

int main(void){
    while(true){
        printf("*****************************************************************\n");
        printf("输入纳税人类型：\n");
        printf("1) 单身\t2) 户主\t3) 已婚，共有\t4) 已婚，离异\t5) 退出\n");
        printf("*****************************************************************\n");
        int type;
        int start_point;
        if(scanf("%d", &type) != 1){
            fflush(stdin);
            continue;
        }
        switch(type){
            case 1:
                start_point = START_POINT_1;
                break;
            case 2:
                start_point = START_POINT_2;
                break;
            case 3:
                start_point = START_POINT_3;
                break;
            case 4:
                start_point = START_POINT_4;
                break;
            case 5:
                return 0;
            default:
                continue;
        }
        here:
        printf("输入收入：\n");
        double money, tax;
        if(scanf("%lf", &money) != 1){
            fflush(stdin);
            goto here;
        }

        if(money <= start_point){
            tax = money*0.15;
        }
        else{
            tax = start_point*0.15+(money-start_point)*0.28;
        }
        printf("应缴税收：%lf\n", tax);
    }
}