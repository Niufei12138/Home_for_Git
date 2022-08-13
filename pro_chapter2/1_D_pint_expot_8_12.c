#include<stdio.h>
void print(int *p,int sz)//指针接收
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",*(p+i)); //地址解引用
        printf("%d ",p[i]);  //数组取元素
    }
}
void print2(int arr[],int sz)//数组接收
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    int sz=sizeof(arr)/sizeof(arr[0]);
    print(p,sz);
    printf("\n");
    print2(p,sz);
    return 0;
}