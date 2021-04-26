#include <stdio.h>
#include <stdbool.h>

#define BASE_PY 1000
#define OVERTIME 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.2
#define TAX_RATE_3 0.25

int main(void){
    printf("输入一周工作的小时数：\n");
    int h;
    scanf("%d",&h);
    double menoy = 0.0;
    double tax = 0.0;
    if(h < 40){
        menoy = h*BASE_PY;
        if(menoy <= 300){
            tax = menoy*0.15;
        }
        else if(menoy <= 450){
            tax = 300*0.15+(menoy-300)*0.2;
        }
        else{
            tax = 300*0.15+150*0.2+(menoy-450)*0.25;
        }
    }
    else{
        menoy = 40*BASE_PY + (h-40)*BASE_PY*1.5;
        tax = 300*0.15+150*0.2+(menoy-450)*0.25;
    }

    printf("工资总额：%lf\t税金：%lf\t净收入：%lf\n", menoy, tax, menoy-tax);

}