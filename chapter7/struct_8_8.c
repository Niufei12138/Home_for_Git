#include<stdio.h>
struct stu            //struct 结构体关键字
{               //stu 结构体标签  struct stu 结构体类型
    char name[10];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3;//创建三个全局变量   
// int main()
// {
//     struct stu s;//创建一个全局变量
//     return 0;
// }
typedef struct stu Stu;
typedef struct STG           
{               
    char str[10];
    short age;
    struct stu s;
    char *p;
}Stg;       //类型名称转换

// int main()
// {
//     char arr[]="未知";
//     char arr2[]={'未','知'};
//     Stg g={"你好",32,{"梨花",15,"1544544",'m'},&arr[0]};//结构体嵌套
//     printf("%s",g.p);
//     return 0;
// }
void print1 (Stu sz);
void print2 (Stu* sz);

int main()
{
    Stu sq={"张三",15,"1888888888","m"};
    // printf("%s\n",sq.tele);
    print1(sq);
    printf("\n");
    print2(&sq);
    return 0;
}
void print1 (Stu sz)
{
    printf("姓名： %s\n",sz.name);
    printf("年龄： %d\n",sz.age);
    printf("电话： %s\n",sz.tele);
    printf("性别： %s\n",sz.sex);
}
void print2 (Stu* sz)//相较于print1，不用额外开辟空间给
{       //形参使用，当结构体空前很大的时候，会引起空间浪费
    printf("姓名： %s\n",sz->name);
    printf("年龄： %d\n",sz->age);
    printf("电话： %s\n",sz->tele);
    printf("性别： %s\n",sz->sex);
}

