// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
// ���磺
// ���룺1234����� 1 2 3 4
#include<stdio.h>
void print(int num)
{
    if (num>0)
    {
        print(num/10);
        printf("%d ",(num%10));
    }

}
int main()
{
    unsigned int num=0;
    scanf("%d",&num);//����1234
    print(num);
    return 0;
}