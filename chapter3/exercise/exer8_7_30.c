// ���n��쳲���������
#include<stdio.h>
// ���ַ�������������Ƚϴ�ʱ�����ظ����������ֵ��ʹ������ٶȱ���
// long long int fibo(int a)
// {
//     if(a<=2)
//     {
//         return 1;
//     }
//     else
//     {    
//         return fibo(a-1)+fibo(a-2);
//     }
// } 

long long int fibo(int n)
{
    long long int a=1;  
    long long int b=1;
    long long int c=1;
    while (n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
    
}
int main()
{
    int a=0;
    printf("��������Ҫ��쳲���������");
    scanf("%d",&a);
    printf("\n����ǣ�%lld",fibo(a));
    return 0;
}