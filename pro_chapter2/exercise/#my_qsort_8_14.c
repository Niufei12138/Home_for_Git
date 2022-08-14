// void qsort 返回类型
//      (void* base,  待处理的数据首地址
//             size_t num,   数据元素数量
//              size_t size,  单个数据元素大小
//             int (*compar)(const void*,const void*));  取出数据使用的方法
#include<stdio.h>
int cmp_int (const void* p1,const void*p2)//外置比较方法
{
    return (*(int*)p1-*(int*)p2 );
}
void my_qsort(void* base,int sz,int size,int (*cmp)(const void*,const void*))
{
    int i,j;
    for (i=0;i<sz-1;i++)//比较遍数
    {
        for(j=0;j<sz-1-i;j++) //比较元素
        {
            if(cmp((char*)base+j*size,(char*)base+(j+1)*size)>0)//强制类型转换，使其能够进行加减操作，注意：void*类型地址无法加减
            {
                // 交换元素
                int x;
                for(x=0;x<size;x++)
                {
                    char a;
                    a=*((char*)base+j*size+x);//将void*类型强制转换为char*，使其能够实现单字节地交换数据
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