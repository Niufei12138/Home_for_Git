#include <stdio.h>
main()
{
int a[4] = { 1, 2, 3, 4 }; //01 00 00 00  02 00 00 00
int *ptr1 = (int *)(&a + 1);//ptr1�����������ĵ�һ��ָ��
int *ptr2 = (int *)((int)a + 1);//ptr2ָ��00 00 00 02
printf( "%x,%x", ptr1[-1], *ptr2); //00 00 00 04, 02 00 00 00 
return 0;
}