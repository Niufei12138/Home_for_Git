#include<stdio.h>//4. дһ��������ÿ����һ������������ͻὫnum ��ֵ����1��
void Add(int* p)
{
    (*p)++;
}
int main()
{
    int num=0;
        Add(&num);
    printf("�������ô�����%d\n",num);
        Add(&num);
    printf("�������ô�����%d\n",num);
        Add(&num);
    printf("�������ô�����%d\n",num);
    return 0;
}