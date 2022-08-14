#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 自己编写的qsort仿制函数，非常滴nice
void my_qsort(void* base,int sz,int size,int (*cmp)(const void*,const void*))
{
    int i,j;
    printf("调用了");
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
                    a=*((char*)base+j*size+x);
                    *((char*)base+j*size+x)=*((char*)base+(j+1)*size+x);
                    *((char*)base+(j+1)*size+x)=a;
                }
            }
        }
    }
}
struct stu
    {
        char name[10];
        int age;
    };
int com_int(const void* e1,const void* e2)
{
    return (*(int*)e1-*(int*)e2 );
}
int com_float(const void* e1,const void* e2)
{
    if((*(float*)e1-*(float*)e2 )<0)
    {return -1;}
    if((*(float*)e1-*(float*)e2 )==0)
    {return 0;}
    if((*(float*)e1-*(float*)e2 )>0)
    {return 1;}
}
int com_struct_age(const void*e1,const void*e2)
{
    return (((struct stu*)e1)->age)-(((struct stu*)e2)->age);
}

int com_struct_name(const void*e1,const void*e2)
{
    return strcmp((((struct stu*)e1)->name),(((struct stu*)e2)->name));
}
void test()
{
    int arr[]={9,8,5,7,6,1,2,4,3};
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),com_int);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void test2()
{
    float arr[]={9.8,8.2,5.4,7.6,6.4,1.1,2.3,4.7,3.5,3.2,3.6};
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),com_float);
    for(i=0;i<sz;i++)
    {
        printf("%.1f  ",arr[i]);
    }
    printf("\n");
}


void test3()
{

    struct stu s[3]={{"zhangsan",15},{"lisi",25},{"wangwu",10}};
    int i;
    int sz=sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),com_struct_age);
    for(i=0;i<sz;i++)
    {
        printf("%d  ",s[i].age);
    }
    printf("\n");
}

void test4()
{

    struct stu s[3]={{"zhangsan",15},{"lisi",25},{"wangwu",10}};
    int i;
    int sz=sizeof(s)/sizeof(s[0]);
    my_qsort(s,sz,sizeof(s[0]),com_struct_name);
    for(i=0;i<sz;i++)
    {
        printf("%s  ",s[i].name);
    }
    printf("\n");
}
int main()
{
    test();
    test2();
    test3();
    test4();
    return 0;
}