// �ð���char*��Ϊ��ֵ���ͣ�������⣬��ʹ�ù�����Ҳ������ת������
// ��������ͽṹ��صļ��飬��������ʹ��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
    {
        char name[10];
        int age;
    };

void my_qsort(char* base,int sz,int size,int (*cmp)(const char*,const char*))
{
    int i,j;
    for (i=0;i<sz-1;i++)//�Ƚϱ���
    {
        for(j=0;j<sz-1-i;j++) //�Ƚ�Ԫ��
        {
            if(cmp(base+j*size,base+(j+1)*size)>0)//ǿ������ת����ʹ���ܹ����мӼ�������ע�⣺void*���͵�ַ�޷��Ӽ�
            {
                // ����Ԫ��
                int x;
                for(x=0;x<size;x++)
                {
                    char a;
                    a=*(base+j*size+x);//��void*����ǿ��ת��Ϊchar*��ʹ���ܹ�ʵ�ֵ��ֽڵؽ�������
                    *(base+j*size+x)=*(base+(j+1)*size+x);
                    *(base+(j+1)*size+x)=a;
                }
            }
        }
    }
}
int com_struct_name(const char*e1,const char*e2)
{
    return strcmp((((struct stu*)e1)->name),(((struct stu*)e2)->name));
}
int main()
{
    struct stu s[3]={{"zhangsan",15},{"lisi",25},{"wangwu",10}};
    int i;
    int sz=sizeof(s)/sizeof(s[0]);
    my_qsort((char*)s,sz,sizeof(s[0]),com_struct_name);
    for(i=0;i<sz;i++)
    {
        printf("%s  ",s[i].name);
    }
    printf("\n");
    return 0;
}