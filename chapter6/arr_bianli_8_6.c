#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int* p1=arr;
    // 或者int *p=&arr[0]
    for(i=0;i<sz;i++)//正向遍历
    {
        printf("%d ",*p1);
        p1++;
    }
    printf("\n");
    int* p2=&arr[sz-1];//注意，获取非首元素地址时需要用取地址操作符
     for(i=0;i<sz;i++)//反向遍历
    {
        printf("%d ",*p2);
        p2--;
    }
    return 0;
}