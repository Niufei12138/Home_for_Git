// ��n�Ľ׳ˡ��������������
#include <stdio.h>
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else
        return 1;
}
int main()
{
    int a=0;
    printf("��������Ҫ�׳˵�����");
    scanf("%d",&a);
    printf("\n����ǣ�%d",fact(a));
    return 0;
}