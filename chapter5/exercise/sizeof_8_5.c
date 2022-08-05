#include<stdio.h>
int main()
{
    short s=5;
    int a=1;
    printf("sizeof(s=a+5):%d\n",sizeof(s=a+5));
    printf("s:%d\n",s);
    printf("sizeof(a+5):%d\n",sizeof(a+5));

    return 0;
}