#include<stdio.h>//2. º∆À„ 1!+2!+3!+°≠°≠+10!
int main()
{
    int i=1;
    int a;
    int acc;
    int result=0;
    while (i<=10)       
    {
        a=1;
        acc=1;
        while(a<=i)
        {acc=acc*a;
        a++;}
        result+=acc;
        i++;
    }
    printf("%d",result);
    return 0;
}
