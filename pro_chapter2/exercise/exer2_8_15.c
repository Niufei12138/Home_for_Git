#include<stdio.h>
struct Test
{
int Num;
char *pcName;
short sDate;
char cha[2];
short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
    p=0x100000;
printf("%p\n", p );      
printf("%p\n", p + 0x1);      //0x100014
printf("%p\n", (unsigned long)p + 0x1);//0x100001
printf("%p\n", (unsigned int*)p + 0x1);//0x100004
return 0;
}