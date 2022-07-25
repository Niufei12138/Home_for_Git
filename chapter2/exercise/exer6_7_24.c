#include<stdio.h>//4. 编写代码，演示多个字符从两端移动，向中间汇聚
#include<windows.h>
#include<stdlib.h>
int main()
{
    char arr1[]="welcome to bit!!!!!";
    char arr2[]="###################";
    printf(arr2);
    int left=0;
    int right=0;
    int sz=sizeof(arr1)/sizeof(arr1[1])-2;
    //sizeof把结束符也算在内了，估-2
    //可以替换为
    // int sz=strlen(arr1)-1
    for (left=0,right=sz;left<=(sz)/2;left++,right--)
    {arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    Sleep(1000);
    system("cls");
    // printf("\n");
    printf(arr2);
    }
    return 0;
}