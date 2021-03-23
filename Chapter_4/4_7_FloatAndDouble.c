#include <stdio.h>
#include <float.h>

int main(void){
    double dd = 1.0/3.0;
    float ff = 1.0/3.0;
    printf("FLT_DIG:%d\tDBL_DIG:%d\n", FLT_DIG, DBL_DIG);
    printf("double类型结果：%.6f\tfloat类型结果：%.6f\n", dd, ff);
    printf("double类型结果：%.12f\tfloat类型结果：%.12f\n", dd, ff);
    printf("double类型结果：%.16f\tfloat类型结果：%.16f\n", dd, ff);

    return 0;
}