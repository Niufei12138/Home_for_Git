// 该版用char*作为传值类型，便于理解，在使用过程中也无需多次转换类型
// 经过数组和结构体地的检验，可以正常使用
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
    for (i=0;i<sz-1;i++)//比较遍数
    {
        for(j=0;j<sz-1-i;j++) //比较元素
        {
            if(cmp(base+j*size,base+(j+1)*size)>0)//强制类型转换，使其能够进行加减操作，注意：void*类型地址无法加减
            {
                // 交换元素
                int x;
                for(x=0;x<size;x++)
                {
                    char a;
                    a=*(base+j*size+x);//将void*类型强制转换为char*，使其能够实现单字节地交换数据
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