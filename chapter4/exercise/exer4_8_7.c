#include<stdio.h>
void re_start(int* arr,int sz)
{
    int i;
    for (i=0;i<sz;i++)
    {
        arr[i]=0;
    }
}
void oppoise(int* arr,int sz)
{
    int i;
    for(i=0;i<sz/2;i++)
    {
        int tem;
        tem=arr[i];
        arr[i]=arr[sz-1-i];
        arr[sz-1-i]=tem;
    }
}
int main()
{
    int arr[9]={0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    re_start(arr,sz);
    int i;
    for (i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    oppoise(arr,sz);
    for (i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}

// 0123456789
// 9876543210