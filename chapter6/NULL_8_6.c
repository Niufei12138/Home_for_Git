#include<stdio.h>
int main()
{
    int*p=NULL;
    int a=3;
    p=&a;
    if(p!=NULL)
    {
        *p=5;
    }
    printf("%d",a);
    return 0;
}