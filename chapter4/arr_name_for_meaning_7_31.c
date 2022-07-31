#include<stdio.h>
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    return 0;
    }