#include<stdio.h>
// int main()
// {
//     int i,j=0;
//     int arr[3][4]={{},1,2,3,4,5};
//     for (i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int i,j=0;
    int arr[3][5]={{},1,2,3,4,5};
    for (i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("&arr[%d][%d]%p \n",i,j,&arr[i][j]);
        }
        // printf("\n");
    }
    return 0;
}