#include<stdio.h>
// int main()
// {
//     double d=1e10;
//     printf("%lf\n",d);
//     return 0;
// }
int main()
{
int n = 9;
// 0 00000000 00000000000000000001001-����
float *pFloat = (float *)&n;
printf("n��ֵΪ��%d\n",n);
printf("*pFloat��ֵΪ��%f\n",*pFloat);
// ���ո����������ӡ����ֵ���޽ӽ���0
*pFloat = 9.0;
// (-1)^0*1.001*2^3
// 0 10000010 00100000000000000000000
// =1091567616
printf("num��ֵΪ��%d\n",n);
printf("*pFloat��ֵΪ��%f\n",*pFloat);
return 0;
}