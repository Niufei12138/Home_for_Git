#include<stdio.h>//求十个数中的最大值
int main()
{
    int arr[]={-1,-5,-8,-9,-2,-6,-59,-49,-898,-1455};
    int max=arr[0];
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[1]);
    for (i=0;i<sz;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}