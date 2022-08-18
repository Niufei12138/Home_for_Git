// 将有序数中的奇数放在偶数前面
#include<stdio.h>
int main()
{
    // int arr[]={1,5,8,9,6,8,2,5,8,1,8,9,8,66,48,51,845,7,87,5,2};
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for (i=0;i<sz;i++)
    {
        if(arr[i]%2==0)
        {
            for(j=i+1;j<sz;j++)
            {
                if(arr[j]%2==1)
                {
                    int tem;
                    tem=arr[j];
                    arr[j]=arr[i];
                    arr[i]=tem;
                    break;
                }
                if(j==(sz-1))
                {
                    goto place1;
                }
            }
        }
    }
    place1:
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}