//�����ĵ�һ����Ϸ
// ��������Ϸ����������������֣���Ҳ�����
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void srand( unsigned int seed );
void menu()
{
    printf("****************************\n");
    printf("***** 1.play    0.exit *****\n");
    printf("****************************\n");
}
void game()
{
    int ret;
    int guess;
    // srand((unsigned int)time(NULL));//��ʱ�����Ϊ��������������
    // //unsigned intǿ������ת����NULL��ָ��
    ret=(rand()%101);//1.�����������0~32767֮�䣬������Ϊ1~100֮��
    //%101�ɵõ�0~100֮��������
    // printf("%d\n",ret);
    //2.������
    while(1)
    {
        printf("������֣�");
        scanf("%d",&guess);
        if (guess>ret)
        {printf("��������>�´���\n");}
        else if(guess<ret)
        {printf("��������>��С��\n");}
        else
        {printf("��������>��ϲ�㣬�¶��ˣ���\n");
        break;}
        
    }
}
int main()//������
{
    int input;
    srand((unsigned int)time(NULL));//��ʱ�����Ϊ�������������㣬ע�⣺���ֻ��Ҫһ��
    // ���ÿ��������Ϸ�������ƣ��������ɵ������Ҳ����������Խ���������������
    //unsigned intǿ������ת����NULL��ָ��
    do
    {
        menu();
        printf("��ѡ�����֣�");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("\nѡ�����\n");
            break;
        }
    } 
        while (input);
    
    return 0;
}