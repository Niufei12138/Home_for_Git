#include<stdio.h>
int main()
{
int a[5] = { 1, 2, 3, 4, 5 };
int *ptr = (int *)(&a + 1);//&aΪ����ָ��
                    // ����������飬������ת��
printf("%d\n",a);   //��ӡ����Ϊ��ַ
printf( "%d,%d", *(a + 1), *(ptr - 1)); 
//          ptr����Ϊint*��-1��Ϊ�������һλԪ�ص�ַ
return 0;
}