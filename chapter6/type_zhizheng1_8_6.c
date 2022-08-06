#include<stdio.h>
int main()
{
    int a=0x11223344;
    int* p1=&a;
    char* p2= &a;
    printf("%p\n",p1);
    printf("%p\n\n",p1+1);

    printf("%p\n",p2);
    printf("%p\n",p2+1);

    return 0;
}