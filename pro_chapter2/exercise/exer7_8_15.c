#include <stdio.h>
int main()
{
// char arr[] = {"work","at","alibaba"};
char *a[] = {"work","at","alibaba"};
// ע�⣬a��ָ���ַ�����ָ������
//�ѳ����ַ�������Ԫ�ص�ַ�Ž�������
char**pa = a;
pa++;
// printf("%s",arr[1]);
printf("%s\n", *pa);
return 0;
}