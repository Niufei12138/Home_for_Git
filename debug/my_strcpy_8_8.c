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

// 优化1
// void my_strcpy(char* arr1,char* arr2)
// {
//     while(*arr1++=*arr2++)        //结构和逻辑语言优化
//     {;}                           //但是遇到输入空指针会崩溃
// }

// 优化2
// void my_strcpy(char* arr1,char* arr2)
// {
//     if(arr1!=NULL&&arr2!=NULL)       //指针保护
//     {
//         while(*arr1++=*arr2++)      //遇到错误会掠过
//     {;}                             //但不会报错
//     }
// }

//优化3___使用断言
// #include<assert.h>
// void my_strcpy(char* arr1,char* arr2)
// {
//     assert(arr1!=NULL);
//     assert(arr2!=NULL);     //发现问题会报错
//      while(*arr1++=*arr2++)     
//     {;}    
// }

// 优化4__使用const固定被copy字符串
// #include<assert.h>
// void my_strcpy(char* arr1,const char* arr2)  //如果arr1和arr2弄反了，这里会报错，能够保护源头数据
// {
//     assert(arr1!=NULL);
//     assert(arr2!=NULL);
//      while(*arr1++=*arr2++)
//     {;}    
// }

// 优化5__返回被修改字符串首地址
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)  //实现功能+返回数据,可以直接打印返回数据
{
    char* ret=arr1;
    assert(arr1!=NULL);
    assert(arr2!=NULL);
     while(*arr1++=*arr2++)
    {;}    
    return ret;
}
int main()
{
    char arr1[]="################";
    char arr2[]="bite";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    printf("%s\n",my_strcpy(arr1,arr2));//链式访问
    return 0;
}