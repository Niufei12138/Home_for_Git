#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[]={1,2,3,4,5,6};
    int *ptr = (int *)(*(a + 1));
    printf("%d\n",sizeof(*b));
    printf("%d\n",sizeof(*(a)));
    printf("%d\n",sizeof(*(a+1))); //8
    printf("%d\n",*(ptr-1)); //4
    //a正常情况下表示首行地址
    // *(a+1)正常情况表示第二行首元素地址
    //与sizeof连用时是指整行，否则指首元素

    int arr[]={1,2,3,4,5,6};
    int *p=arr;
    // *(p+2)==arr[2]==p[2]==> *(arr+2)=arr[2]
return 0;
}