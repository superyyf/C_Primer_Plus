#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void){
    int overFlow_int = 2147483648;
    int underFlow_int = -2147483649;
    printf("int_max: %d\toverflow: %d\nint_min: %d\tunderflow: %d\n", INT_MAX, overFlow_int, INT_MIN, underFlow_int);

    float overFlow_f = 3.402823e+038*10.0f;
    float underFlow_f = 1.175494e-038/10.0f;
    printf("float_max: %e\toverflow: %f\nfloat_min: %e\tunderflow: %f\n", FLT_MAX, overFlow_f, FLT_MIN, underFlow_f);
}