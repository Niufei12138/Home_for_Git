// �ú���ʵ�ֶ��ֲ���

#include<stdio.h>
int binary_search(int arr[],int k,int sz)//arr��һ��ָ���ַ
{
    int left=0;
    int right=sz;
    int index;
    while (1) 
    {
        index=(left+right)/2;
        if(arr[index]==k)
        {
            return index; //return����ʵ��break������
        }
        
        if((right-left)<=1)
            return -1;
        else
            if(k<arr[index])
                right=index;
            else
                left=index;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    int sz=sizeof(arr)/sizeof(arr[0]);
    while (k!=10086)
    {
        printf("������������֣�");
        scanf("%d",&k);
        int ret=binary_search(arr,k,sz);//���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
        if(ret!=-1)
        {printf("���ڸ�Ԫ�أ��±�Ϊ: %d\n",ret);}
        else
        {printf("�Ҳ�����Ԫ��");}

    }
    return 0;
}