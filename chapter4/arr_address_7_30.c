#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]={1,2,3,4,5,6,7,8,9,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<sz;i++)
    {
    printf("&arr[%d]=%p\n",i,&arr[i]);
    }
    return 0;
}