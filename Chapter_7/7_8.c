#include <stdio.h>
#include <stdbool.h>

#define BASE_PY_1 8.75
#define BASE_PY_2 9.33
#define BASE_PY_3 10.00
#define BASE_PY_4 11.20

#define OVERTIME 1.5

#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.2
#define TAX_RATE_3 0.25

int main(void){
    while(true){
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr\t2) $9.33/hr\n3) $10.00/hr\t4) $11.20/hr\n5) quit\n");
        printf("*****************************************************************\n");
        int item;
        int base_menoy;
        scanf("%d",&item);
        switch(item){
            case 1:
                base_menoy = BASE_PY_1;
                break;
            case 2:
                base_menoy = BASE_PY_2;
                break;
            case 3:
                base_menoy = BASE_PY_3;
                break;
            case 4:
                base_menoy = BASE_PY_4;
                break;
            case 5:
                return 0;
            default :
                continue;
        }

        printf("输入一周工作的小时数：\n");
        int h;
        scanf("%d",&h);
        double menoy = 0.0;
        double tax = 0.0;

        if(h < 40){
            menoy = h*base_menoy;
        
        }
        else{
            menoy = 40*base_menoy + (h-40)*base_menoy*1.5;
        }

        if(menoy <= 300){
            tax = menoy*0.15;
        }
        else if(menoy <= 450){
            tax = 300*0.15+(menoy-300)*0.2;
        }
        else{
            tax = 300*0.15+150*0.2+(menoy-450)*0.25;
        }

        printf("工资总额：%lf\t税金：%lf\t净收入：%lf\n", menoy, tax, menoy-tax);


    }
   
}