// ��Ŀ���ƣ�
//���Ͼ���
//��Ŀ���ݣ�
// /��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�����Ƿ����
// /Ҫ��ʱ����Ӷ�С��o(N);
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
        printf("YES,��ַ��%d��%d��",x+1,y+1);
    }
    return 0;
}