#include<stdio.h>
int main()
{
    int a=9;
    float *p_float=(float*)&a;
    printf("%d\n",a);
    printf("%f\n",*p_float);
    *p_float=9.0;
    printf("%d\n",a);
    printf("%f\n",*p_float);
    return 0;
}