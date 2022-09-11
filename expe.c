#include<stdio.h>
union Un1
{
char c[5];
int i;
};
union Un2
{
short c[7];
int i;
};
int main()
{

printf("%d\n", sizeof(union Un1));
printf("%d\n", sizeof(union Un2));
}
//下面输出的结果是什么？