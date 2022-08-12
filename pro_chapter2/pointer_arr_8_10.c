#include<stdio.h>
// int main()一般不会这么使用
// {
//     int a=1234;
//     int b=123;
//     int c=12;
//     int d=1;
//     int i;
//     int* arr[4]={0};
//     int**parr[1]={0};
//     arr[0]=&a;
//     parr[0]=&arr[0];
//     printf("%d\n",**parr[0]);
//     arr[1]=&b;
//     arr[2]=&c;
//     arr[3]=&d;
//     for (i=0;i<4;i++)
//     {
//         printf("%d\n",*(arr[i]));
//     }
//     return 0;
// }

int  main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,5,6};
    int arr3[]={3,4,5,6,7};
    int*parr[]={arr1,arr2,arr3};
    int*p=&arr1[0];
    int i=0;
    for (i=0;i<3;i++)
    {
        int j=0;
        for (j=0;j<5;j++)
        {
            printf("%d ",*(parr[i]+j));
        }
        printf("\n");
    }
    printf("%d",p[2]);
    return 0;
}