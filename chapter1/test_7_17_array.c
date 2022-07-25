#include <stdio.h>
// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     printf("%d%d\n",arr[4],arr[6]);
//     int i=0;
//     while (i<10)
//     {
//         printf("%d\n",arr[i]);
//         i++;
//     }
//     return 0;
// }

#include <string.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    // printf("%s\n",arr1);
    printf("%d\n",sizeof(arr1));
    printf("%d\n",sizeof(arr1)/sizeof(arr1[0]));
    return 0;
}