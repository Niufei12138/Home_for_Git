// 题目名称：
//杨氏矩阵
//题目内容：
// /有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某数字是否存在
// /要求：时间厚杂度小于o(N);
#include<stdio.h>
int have_it(int arr[][3],int num,int* x_row,int* y_col)
{
    int row=*x_row;
    int col=*y_col;
    int x=0;
    int y=col-1;
    while((arr[x][y]<num)&&(x<row))
    {
        x++;
    }
    if(x>row)
    {
        return 0;
    }
    int i;
    for(i=0;i<col;i++)
    {
        if(arr[x][i]==num)
        {
            *x_row=x;
            *y_col=i;
            return 1;
        }
    }
    return 0;
}
// 1 2 3
// 4 5 6
// 7 8 9
int main()
{
    int arr[3][3]={1,2,3,4,5,6,10,18,100};
    int input;
    int x=3;
    int y=3;
    scanf("%d",&input);
    int ret=have_it(arr,input,&x,&y);
    if(ret==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES,地址是%d行%d列",x+1,y+1);
    }
    return 0;
}