#include<stdio.h>
struct Book
{
    char name[100];
    short price;
};
// 用地址打印
// int main()
// {
//     struct Book b1={"C语言程序设计",55};
//     struct Book* pb=&b1;
//     printf("%s\n",(*pb).name);
//     printf("%d\n",(*pb).price);
//     return 0;
// }


// 常规使用
// int main()
// {
//     struct Book b1={"中C语言程序设计",55};//把
//     // Book结构赋予b1，使其能够存储两个数据
//     printf("书名：%s\n",b1.name);
//     // 提取b1中的name
//     printf("价格：%d\n",b1.price);
//     b1.price=15;//修改价格
//     printf("新价格：%d\n",b1.price);
//     return 0;
// }

// 更改数组名（name）里对应的内容
#include<string.h>
int main()
{
    struct Book b1={"C语言程序设计",55};
    strcpy(b1.name,"C++");
    // string copy:把新字符串拷贝到b1.name中
    // 这是一个库函数，需要头文件
    printf("新名字:%s\n",b1.name);
    return 0;
}