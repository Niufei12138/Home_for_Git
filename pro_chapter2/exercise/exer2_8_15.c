#include<stdio.h>
struct Test
{
int Num;
char *pcName;
short sDate;
char cha[2];
short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
    p=0x100000;
printf("%p\n", p );      
printf("%p\n", p + 0x1);      //0x100014
printf("%p\n", (unsigned long)p + 0x1);//0x100001
printf("%p\n", (unsigned int*)p + 0x1);//0x100004
return 0;
}