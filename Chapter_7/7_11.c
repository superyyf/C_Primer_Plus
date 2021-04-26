#include <stdio.h>
#include <stdbool.h>

#define Artichoke 2.05
#define Beet 1.15
#define Carrot 1.09

int main(void){
    double a=0.0, b=0.0, c=0.0;
    bool flag = true;
    while(flag){
        printf("******************\n");
        printf("输入想要购买的菜：\n");
        printf("a) 洋芋\tb) 甜菜\tc) 胡萝卜\tq) 退出订单\n");
        double aw, bw, cw;
        int ch;
        ch = getchar();
        switch (ch)
        {
        case 'a':
            printf("洋芋要多少？\n");
            if(scanf("%lf", &aw) == 1){
                a += aw;
            };
            break;
        case 'b':
            printf("甜菜要多少？\n");
            if(scanf("%lf", &bw) == 1){
                b += bw;
            };
            break;
        case 'c':
            printf("胡萝卜要多少？\n");
            if(scanf("%lf", &cw) == 1){
                c += cw;
            };
            break;
        case 'q':
            flag = false;
            break;
        default:
            continue;
        }
    }

    printf("您的订单如下：\n");
    printf("===================\n");
    printf("编号\t蔬菜名\t售价($/磅)\t重量(磅)\t费用($)\n");
    int num = 0;
    if(a != 0.0){
        printf("%d\t洋芋\t2.05\t%lf\t%lf\n", ++num, a, a*Artichoke);
    }
    if(b != 0.0){
        printf("%d\t甜菜\t1.15\t%lf\t%lf\n", ++num, b, b*Beet);
    }
    if(c != 0.0){
        printf("%d\t胡萝卜\t1.09\t%lf\t%lf\n", ++num, c, c*Carrot);
    }

    double total = a*Artichoke+b*Beet+c*Carrot;
    printf("------------------\n");
    printf("折扣前：%lf\t", total);
    if(total > 100.0){
        total = 0.95*total;
        printf("折扣：95%%\t折扣后：%lf\t", total);
    }
    else{
        printf("折扣：无\t折扣后：%lf\t",total);
    }

    double trans;
    if(a+b+c <= 5.0){
        printf("运费：%lf\t总计：%lf\n", 6.5, total+6.5);
    }
    else if(a+b+c <= 20){
        printf("运费：%lf\t总计：%lf\n", 14, total+14);
    }
    else{
        trans = 14 + (a+b+c-20)*0.5;
        printf("运费：%lf\t总计：%lf\n", trans, total+trans);
    }

}