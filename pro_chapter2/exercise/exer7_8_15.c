#include <stdio.h>
int main()
{
// char arr[] = {"work","at","alibaba"};
char *a[] = {"work","at","alibaba"};
// 注意，a是指向字符串的指针数组
//把常量字符串的首元素地址放进数组中
char**pa = a;
pa++;
// printf("%s",arr[1]);
printf("%s\n", *pa);
return 0;
}