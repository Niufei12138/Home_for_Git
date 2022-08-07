#include<stdio.h>
int mian()
{
    int a=1;
    int b=2;
    int c=3;
    int i;
    int* arr[3]={0};
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    for(i=0;i<3;i++)
    {
        printf("%d ",*(arr[i]));
    }
    return 0;
}