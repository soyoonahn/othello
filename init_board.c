#include <stdio.h>
#include <stdlib.h>

#define N 6

//extern�� �̿��Ͽ� main������ ���� ���� 
extern char board[N][N];
extern int player;
extern int score[2];
extern int WHITE, BLACK; 

void init_board(char board[][N])
{
	int x, y;
	for(x=0; x<N; x++)
		for(y=0; y<N; y++) board[x][y] = ' '; //board [x][y]�� ��� ������ ���  
		
	//�ʱ� white�� black�� ��ġ
	board [N/2-1][N/2-1] = 'O';  
	board [N/2-1][N/2] = 'X';
	board [N/2][N/2-1] = 'X';
	board [N/2][N/2] = 'O';
	
	//�ʱ� white�� black�� ����
	score[WHITE] = 2;  
	score[BLACK] = 2;
}


