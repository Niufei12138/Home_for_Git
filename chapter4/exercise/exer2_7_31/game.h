#define ROW 3//没有分号
#define COL 3//自定义棋盘大小，这个不是变量，是定义的量，所以可以用到数组当中

void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);
char win_judge(char board[ROW][COL], int row, int col);


//棋盘样式
		//      |   |   
		//   ---|---|---
		//      |   |   
		//   ---|---|---
		//      |   |   

//棋盘的四种状态
//玩家赢 ，输出'*'
//电脑赢 ，输出'#'
//平局 ，棋盘没有' '了，已经满了，输出'p'
//继续 ，输出'g'
