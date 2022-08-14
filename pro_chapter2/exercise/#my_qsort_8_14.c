// void qsort ��������
//      (void* base,  ������������׵�ַ
//             size_t num,   ����Ԫ������
//              size_t size,  ��������Ԫ�ش�С
//             int (*compar)(const void*,const void*));  ȡ������ʹ�õķ���
#include<stdio.h>
int cmp_int (const void* p1,const void*p2)//���ñȽϷ���
{
    return (*(int*)p1-*(int*)p2 );
}
void my_qsort(void* base,int sz,int size,int (*cmp)(const void*,const void*))
{
    int i,j;
    for (i=0;i<sz-1;i++)//�Ƚϱ���
    {
        for(j=0;j<sz-1-i;j++) //�Ƚ�Ԫ��
        {
            if(cmp((char*)base+j*size,(char*)base+(j+1)*size)>0)//ǿ������ת����ʹ���ܹ����мӼ�������ע�⣺void*���͵�ַ�޷��Ӽ�
            {
                // ����Ԫ��
                int x;
                for(x=0;x<size;x++)
                {
                    char a;
                    a=*((char*)base+j*size+x);//��void*����ǿ��ת��Ϊchar*��ʹ���ܹ�ʵ�ֵ��ֽڵؽ�������
                    *((char*)base+j*size+x)=*((char*)base+(j+1)*size+x);
                    *((char*)base+(j+1)*size+x)=a;
                }
            }
        }
    }
}
int main()
{
    int i;
    int arr[]={5,8,2,3,4,7,9,1,61};
    int sz=sizeof(arr)/sizeof(arr[0]);
    my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}