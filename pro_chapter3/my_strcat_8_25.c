#include<stdio.h>
#include<assert.h>
char * my_strcat(char* dest,const char* src)
{

    assert(dest && src);
    char*ret=dest;
    // �ҵ�Ŀ���ַ�����ʵ0λ��
    while (*dest)
    {
        dest++;
    }
    while (*dest++=*src++)
    {
        ;
    }
    return ret;
    

}
int main()
{
    char arr1[30]="abcdefgh";//��Ŀ���ַ����㹻��Ŀռ�
    char arr2[]="bit";
    my_strcat(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}