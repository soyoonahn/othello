#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

int score[2];
char board[N][N]; //2���� ���� �迭�� ���� ��Ÿ���� 

extern void init_board(char board[][N]);
extern int player_move(int player, char board[][N]);
extern void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board); //���� �ʱ�ȭ 
	do	{ //do�� �ϴ� �ѹ� ����, while ������ ���� �˻��� ���̸� �� do ���� 
		print_board(board);
		quit = player_move(0, board); // player�� 0 ���� 
		if (quit == 1) break;
		print_board(board);
		quit = player_move(1, board);
		if (quit == 1) break;
	} while(quit == 0);
	return 0;
}
