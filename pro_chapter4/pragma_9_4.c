// 修改默认对齐数
#include<stdio.h>
#pragma pack(1)
struct s
{
    char c1;
    double c2;
};
#pragma pack()
struct sx
{
    char c1;
    double c2;
};
int main()
{
    struct s S;
    printf("%d\n",sizeof(S));
    struct sx S1;
    printf("%d\n",sizeof(S1));
    return 0;
}