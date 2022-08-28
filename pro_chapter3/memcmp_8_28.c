#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={1,2,3,4,5,5};
    int ret;
    ret=memcmp(arr1,arr2,12);
    printf("%d\n",ret);
    ret=memcmp(arr1,arr2,16);
    printf("%d\n",ret);
    ret=memcmp(arr1,arr2,24);
    printf("%d\n",ret);
    return 0;
}