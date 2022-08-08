#include<stdio.h>
#include <string.h>
// void my_strcpy(char* arr1,char* arr2)//常规方法
// {
//     int i=0;
//     while (arr2[i]!='\0')
//     {
//         arr1[i]=arr2[i];
//         i++;
//     }
//     arr1[i]=arr2[i];
// }

// 优化
void my_strcpy(char* arr1,char* arr2)
{
    while(*arr1++=*arr2++)
    {;}
}
int main()
{
    char arr1[]="################";
    char arr2[]="bite";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}