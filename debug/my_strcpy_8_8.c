#include<stdio.h>
#include <string.h>
// void my_strcpy(char* arr1,char* arr2)//���淽��
// {
//     int i=0;
//     while (arr2[i]!='\0')
//     {
//         arr1[i]=arr2[i];
//         i++;
//     }
//     arr1[i]=arr2[i];
// }

// �Ż�1
// void my_strcpy(char* arr1,char* arr2)
// {
//     while(*arr1++=*arr2++)        //�ṹ���߼������Ż�
//     {;}                           //�������������ָ������
// }

// �Ż�2
// void my_strcpy(char* arr1,char* arr2)
// {
//     if(arr1!=NULL&&arr2!=NULL)       //ָ�뱣��
//     {
//         while(*arr1++=*arr2++)      //����������ӹ�
//     {;}                             //�����ᱨ��
//     }
// }

//�Ż�3___ʹ�ö���
// #include<assert.h>
// void my_strcpy(char* arr1,char* arr2)
// {
//     assert(arr1!=NULL);
//     assert(arr2!=NULL);     //��������ᱨ��
//      while(*arr1++=*arr2++)     
//     {;}    
// }

// �Ż�4__ʹ��const�̶���copy�ַ���
// #include<assert.h>
// void my_strcpy(char* arr1,const char* arr2)  //���arr1��arr2Ū���ˣ�����ᱨ���ܹ�����Դͷ����
// {
//     assert(arr1!=NULL);
//     assert(arr2!=NULL);
//      while(*arr1++=*arr2++)
//     {;}    
// }

// �Ż�5__���ر��޸��ַ����׵�ַ
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)  //ʵ�ֹ���+��������,����ֱ�Ӵ�ӡ��������
{
    char* ret=arr1;
    assert(arr1!=NULL);
    assert(arr2!=NULL);
     while(*arr1++=*arr2++)
    {;}    
    return ret;
}
int main()
{
    char arr1[]="################";
    char arr2[]="bite";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    printf("%s\n",my_strcpy(arr1,arr2));//��ʽ����
    return 0;
}