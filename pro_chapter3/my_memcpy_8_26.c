#include<stdio.h>
#include<memory.h>
#include<assert.h>
struct stu
{
    char name[10];
    int age;
};
void* my_memcpy(void*dest,const void*src,int szie_n)
{
    assert(dest&&src);
    void* tem=dest;
    while (szie_n--)
    {
        *(char*)dest=*(char*)src;
        dest=dest+1;
        src=src+1;
    }
    return tem;
    
}
int main()
{
    int arr1[]={1,2,4,5,6,7,8,5};
    int arr2[10]={2};
    int i;
    struct stu arr3[]={{"张三",15},{"李四",11},{"王五",25}};
    struct stu arr4[4]={0};
    my_memcpy(arr2,arr1,sizeof(arr1));
    my_memcpy(arr4,arr3,sizeof(arr3));
    for(i=0;i<8;i++)
    {
        printf("%d  ",arr2[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%s %d\n",arr4[i].name,arr4[i].age);
    }
    return 0;
}