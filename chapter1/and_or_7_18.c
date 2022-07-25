// &&——逻辑与
// ||——逻辑或
#include <stdio.h>
int main()
{
    int a=5;
    int b=6;
    int c=0;
    int x=a&&b;
    int y=a&&c;
    int z=a||c;
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}