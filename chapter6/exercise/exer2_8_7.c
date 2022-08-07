#include<stdio.h>//ÓÃµİ¹éÊµÏÖ×Ö·û´®ÄæĞò
#include<string.h>
void reverse_string(char arr[])
{
    char tem=arr[0];
    int r_index=strlen(arr)-1;
    arr[0]=arr[r_index];
    arr[r_index]='\0';
    if(r_index>=2)
    {reverse_string(arr+1);}
    arr[r_index]=tem;
}
int main()
{
    char arr[]="abcdefg";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}