#include<stdio.h>
int main()
{
    int arr[10]={0};
    int i;
    int *p=arr;
    for(i=0;i<10;i++)
    {
        *(p+i)=i;
        printf("%d ",*(p+i));
    }
    return 0;
}