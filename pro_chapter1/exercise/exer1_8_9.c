#include <stdio.h>
int main()
{
	char a = -128;
    // 下面演示整个过程
    // 10000000000000000000000010000000——-128原码，计算机首先以这种方式出现-128这个数值
    // 11111111111111111111111101111111——反码
    // 11111111111111111111111110000000——补码
    // 直接截取后八位得
    // 10000000——阶段8bite存储在char a中
    // 打印成unsigned类型，发生整形提升——按符号位补1
    // 11111111111111111111111110000000——补码
    // 由于转换成无符号类型，直接按照补码打印4294967168
	printf("%u\n", a);
	return 0;
}

int main()
{
	char a = (char)-256;//强制类型转换，提取后八位
    // 下面演示整个过程
    // 10000000000000000000000100000000——-128原码，计算机首先以这种方式出现-128这个数值
    // 11111111111111111111111011111111——反码
    // 11111111111111111111111100000000——补码
    // 直接截取后八位得
    // 00000000=0
	printf("%u\n", a);
	return 0;
}