#include<stdio.h>
struct Person
{
    char num[15];
    char country[10];
};

struct stu
{
    char name[20];
    int age;
    struct Person p;
};

int main()
{
    struct stu s1={"zhang",15,{"52225488","china"}};
    printf("%s %d %s  %s ",s1.name,s1.age,s1.p.num,s1.p.country);
    return 0;
}