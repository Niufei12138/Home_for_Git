#include<stdio.h>
void menu()
{
    printf("############################################\n");
    printf("##########    1.add       2.sub    #########\n");
    printf("##########    3.mul       4.div    #########\n");
    printf("################  0.exit      ##############\n");
    printf("############################################\n");
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int choose_num=0;
    int(*arr[4])(int,int)={add,sub,mul,div};
    do
    {
    menu();
    printf("��������Ҫ�ļ��㷨����ţ�\n");
    scanf("%d",&choose_num);
    if(choose_num>0&&choose_num<5)
    {
        int num1,num2;
        printf("��������������ֵ��\n\n");
        scanf("%d%d",&num1,&num2);
        printf("���Ϊ��%d\n",arr[choose_num-1](num1,num2));
    }
    else if(choose_num>=5)
    {
        printf("�������\n");
    }
    } 
    while (choose_num);
    
    return 0;
}