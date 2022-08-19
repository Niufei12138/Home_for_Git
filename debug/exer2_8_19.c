#include<stdio.h>
#include<string.h>
#include<assert.h>
// 暴力求解
// void left_move(char arr[],int a)
// {
//     int i;
//     if(a>0)
//     {
//         a--;
//         char tem;
//         tem=arr[0];
//         for(i=0;i<strlen(arr)-1;i++)
//         {
//             arr[i]=arr[i+1];
//         }
//         arr[i]=tem;
//         left_move(arr,a);
//     }
// }

// 三部反转法
// ab cdef
// ba fedc 左右分别逆序
// cdefab  整体逆序
void reverse(char*left,char*right)
{
    int tem;
    while (left<right)
    {
        tem =*left;
        *left=*right;
        *right=tem;
        left++;
        right--;
    }
}
void left_move(char arr[],int k)
{
    assert(arr);
    int len=strlen(arr);
    reverse(arr,arr+k-1);
    reverse(arr+k,arr+len-1);
    reverse(arr,arr+len-1);
}
int main()
{
    char arr[]="abcdefgh";
    left_move(arr,2);
    printf("%s",arr);
    return 0;
}