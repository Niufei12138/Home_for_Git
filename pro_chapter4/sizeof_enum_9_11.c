#include<stdio.h>
enum sex
{
    male,
    female,
    secret
};
int main()
{
    enum sex u=male;
    printf("%d\n",sizeof(u));
    return 0;
}