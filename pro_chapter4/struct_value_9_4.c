#include<stdio.h>
struct s
{
    char c1;
    int i;
    double c2;
};
void fun1(struct s* p)
{
    p->c1='m';
    p->i=4;
    p->c2=2.445;
}
void fun2(struct s p)
{
    printf("%c\n",p.c1);
    printf("%lf\n",p.c2);
    printf("%d\n",p.i);
}
int main()
{
    struct s z={0};
    fun1(&z);
    fun2(z);
    return 0;
}