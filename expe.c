#include <stdio.h>

struct S1{
    char c1;
    int i;
    char c2;
    };
    //Á·Ï°2
struct S2
    {
    char c1;
    char c2;
    int i;
    };
struct S3
    {
    double d;
    char c;
    int i;
    };
int main()
{
    struct S1 x={'!',16,'0'};
    printf("%d\n", sizeof(struct S1));
    printf("%d\n", sizeof(struct S2));
    return 0;
}