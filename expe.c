#include<stdio.h>
#include<string.h>
int main()
{
int a[3][4] = {0};
printf("%d\n",sizeof(a));         //3*4*4=48
printf("%d\n",sizeof(a[0][0]));   //4
printf("%d\n",sizeof(a[0]));      //4*4=16
printf("%d\n",sizeof(a[0]+1));    //4/8  ��ʾ��һ��
                            //   �ڶ���Ԫ�صĵ�ַ����a+1����
printf("%d\n",sizeof(*(a[0]+1))); //4  ��һ�еڶ���Ԫ�صĴ�С
printf("%d\n",sizeof(a+1));       //4/8 �ڶ��еĵ�ַ
printf("%d\n",sizeof(*(a+1)));    //16 �ڶ��еĴ�С
printf("%d\n",sizeof(&a[0]+1));   //4/8  �ڶ��еĵ�ַ
printf("%d\n",sizeof(*(&a[0]+1)));//16 �ڶ��д�С
printf("%d\n",sizeof(*a));        //16 ��һ�еĴ�С
printf("%d\n",sizeof(a[3]));      //16 �����д�С��������û
                            // �����ն�ά����Ķ��壬�п���ʡ��
return 0;
}