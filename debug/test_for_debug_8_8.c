#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void pp()
//{
//	printf("abc");
//	printf("abc");
//	printf("abc");
//	printf("abc");
//
//}
//int main()
//{
//	int i,j;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", i);
//	}
//	pp();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	const int a = 10;
	// const int* p= &a;//const ��ʾ����ͨ��*p�޸�a
	//int * const p = &a;  //const��ʾ�����޸�pָ��ָ��ĵ�ַ
	const int* const p = &a;
	//*p = 20;
	printf("%d", *p);
	return 0;
}