#include<stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int (*pa)[10]=&arr;
//     int i;
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",(*pa)[i]);//*pa=arr
//     }
//     printf("\n");
//     return 0;
// }
// 以上用法过于繁琐，可用普通的元素指针实现
void my_print1(int arr[3][5],int x,int y)
{
    int i=0;
    int j=0;
    for(i=0;i<x;i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void my_print2(int (*arr)[5],int x,int y)
{
    int i;
    for(i=0;i<x;i++)
    {
        int j;
        for(j=0;j<y;j++)
        {
            // printf("%d ",(*(arr+i))[j]);
            // 或者
            // printf("%d ",*(*(arr+i)+j));
            // 或者
            printf("%d ",arr[i][j] );
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    my_print1(arr,3,5);
    printf("\n");
    my_print2(arr,3,5);
    return 0;
}