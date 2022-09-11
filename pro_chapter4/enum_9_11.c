#include<stdio.h>
enum sex
{
    male,
    female,
    secret
};
enum Color//颜色
{
RED=1,
GREEN=2,
BLUE=4
};

int main()
{
    enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
    clr = 5;
    enum sex s=male;
    printf("%d %d %d",male,female,secret);
    return 0;
}