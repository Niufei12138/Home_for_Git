#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i;
	int *p = arr;
	for (i = 0; i < 10; i++)
	{
		//px = p + i;
		*(p + i) = 1;
		//��Ϊ����ָ������Ϊint*������pÿ��1��ָ��������4��ָ����һԪ��
	}
	return 0;
}