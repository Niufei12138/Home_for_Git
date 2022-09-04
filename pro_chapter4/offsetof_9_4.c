#include<stdio.h>
#include<stddef.h>
struct s
{
    char c1;
    int i;
    double c2;
};
int main()
{
    printf("%d\n",offsetof(struct s,c1));
    printf("%d\n",offsetof(struct s,i));
    printf("%d\n",offsetof(struct s,c2));

    return 0;
}