#define ROW 3//û�зֺ�
#define COL 3//�Զ������̴�С��������Ǳ������Ƕ�����������Կ����õ����鵱��

void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);
char win_judge(char board[ROW][COL], int row, int col);


//������ʽ
		//      |   |   
		//   ---|---|---
		//      |   |   
		//   ---|---|---
		//      |   |   

//���̵�����״̬
//���Ӯ �����'*'
//����Ӯ �����'#'
//ƽ�� ������û��' '�ˣ��Ѿ����ˣ����'p'
//���� �����'g'
