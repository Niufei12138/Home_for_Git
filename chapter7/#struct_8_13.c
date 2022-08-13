#include<stdio.h>
typedef struct stu
{
    char name[10];
    int age;
} STU;

int main()
{
    STU class1[3]={{"aaa",15},{"bbb",25},{"ccc",21}};
    printf("%d",class1[1].age);
    return 0;
}