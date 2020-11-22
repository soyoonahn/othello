#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 0
#define BLACK 0
#define EMPTY 2

int player;
int isGameEnd = 0;

char board[N][N];

extern void init_board(char board[][N]);
extern int player_move(int player, char board[][N]);
extern void print_board(char board[][N]);

int main(void)
{	

int row;
int col;
int board_row;
int board_col;

init_board(); // ���� �ʱ�ȭ

while(isGameEnd == 0)
{
	print_board(); //�� ��ġ�� WHITE, BLACK ���� ���
	if (able_to_place == 0)
	{
		isGameEnd == 1; // ���� ����
		continue; // �� player ��� ��ġ�� �Ұ����ϸ� �ݺ��� ���������� ��
		
		input_place(&board_row, &board_col);
	}
		if(over_board(board_row, board_col == 1))
		{
			if (able_to_flip(board_row, board_col))
			{
				put_othello(board_row, board_col);
				
				while(able_to_flip(board_row, board_col))
					try_to_flip(board_row, board_col);
					
				print_flip_number();
				change_turn();
					
			}
			else print_invalid_flip();
		}
		else print_invalid_range();
		 
	 } 
	 
	 check_result();	
 } 

