#include<stdio.h>
#include<memory.h>
struct stu
{
    char name[10];
    int age;
};

int main()
{
    int arr1[]={1,2,4,5,6,7,8,5};
    int arr2[10]={2};
    struct stu arr3[]={{"张三",15},{"李四",11},{"王五",25}};
    struct stu arr4[4]={0};
    memcpy(arr2,arr1,sizeof(arr1));
    memcpy(arr4,arr3,sizeof(arr3));
    return 0;
}