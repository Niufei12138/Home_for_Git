// ��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����(�������м���1)
// #include<stdio.h>
// int main()
// {
//     int a=3231;
//     int count=0;
//     while (a)
//     {
//         if(a%2==1)
//         {count++;}
//         a=a/2;
//     }
//     printf("%d",count);
//     return 0;
// }

// ��2����λ��ʵ��
#include<stdio.h>
int main()
{
    int num,count;
    int i=0;
    scanf("%d",&num);
    for(i=0;i<32;i++)
    {
        if((num & (1<<i))!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

