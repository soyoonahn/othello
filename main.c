#include <stdio.h>
#include <stdlib.h>

#define N 6		  //macro �̿��Ͽ� ������ ĭ ���� ����

int WHITE, BLACK; 

int score[2]; 	  //white�� black�� score�� ������ �迭 ����. white, black �ΰ����̹Ƿ� ũ�⸦ 2�� ����. 
char board[N][N]; //2���� ���� �迭�� NxN ũ���� ���� ��Ÿ����.  

extern void init_board(char board[][N]);
extern int player_move(int player, char board[][N]);
extern void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board); 			      //���� �ʱ�ȭ �Լ� ���� 
	do	{ 			  				  //do�� �ϴ� �ѹ� ����, while ������ ���� �˻��� ���̸� �� do ���� 
		print_board(board); 		  //���� ���� ���� ��� 
		quit = player_move(0, board); // player_move �Լ� ����, player = 0(white's turn)
		if (quit == 1) break; 		  //���������� �����Ǹ� quit=1(return=1)�� �Ǿ� do~while�� ����
		 
		print_board(board);			  // player = 1(black's turn) ���� �����ϹǷ� �ּ� ���� 
		quit = player_move(1, board);
		if (quit == 1) break;
		
	} while(quit == 0);				 //quit = 0�� ���� do~while�� ���� 
	return 0;
}
