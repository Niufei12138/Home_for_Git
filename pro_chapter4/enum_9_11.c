#include<stdio.h>
enum sex
{
    male,
    female,
    secret
};
enum Color//��ɫ
{
RED=1,
GREEN=2,
BLUE=4
};

int main()
{
    enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
    clr = 5;
    enum sex s=male;
    printf("%d %d %d",male,female,secret);
    return 0;
}