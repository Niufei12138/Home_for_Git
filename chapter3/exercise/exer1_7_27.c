#include<stdio.h>
#include<math.h>
int is_prime(int a)
{
    int n;
    // for (n=2;n<=sqrt(a);n++)//���ַ�����һ��ȱ�ݾ��ǻ��ж�3��������
    // {
    //     if(a%n==0)
    //     {return 0;
    //     break;}
    //     else if (n>(sqrt(a)-1))
    //     {
    //         return 1;
    //     }
        
    // }
    //�����ж�
    // for ( n = 2; n < a; n++)
    // {
    //     if(a%n==0)  
    //     {return 0;}
    //     if(n==(a-1))
    //     {return 1;}
    // }
    
}
int main()
{
    int i;
    printf("��������Ҫ�жϵ�����");
    scanf("%d",&i);
    if (is_prime(i)==1)
    {printf("%d������",i);}
    else 
    {printf("%d�Ƿ�����",i);}
    return 0;
}