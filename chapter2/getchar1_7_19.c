#include <stdio.h>
// int main()
// {
//     int ch=0;
//     while ((ch=getchar())!=EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }


int main()
{
    char ret='a';
    int ch=0;
    char password[20]={0};
    printf("���������룺>");
    scanf("%s",password);
    while (ch=getchar()!='\n')
    //��ȡ�����ַ�
    {
        ;//�����
    }
    
    printf("��ȷ�ϣ�Y/N��:>");
    // ����123456+�س���\n��
    printf("%c",ret);
    ret =getchar();
    // printf("%s",ret);
    if (ret=='Y')
    {
        printf("ȷ�ϳɹ�\n");
    }
    else
    {
        printf("ȷ�Ϸ���\n");
    }
    printf("%c",ret);
    return 0;
}