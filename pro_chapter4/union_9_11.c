#include<stdio.h>
union un
{
    char c;
    int i;
};
int main()
{
    union un u;
    printf("%d\n",sizeof(u));
    printf("%p\n",&u);
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    
    return 0;
}