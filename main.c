#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 0
#define BLACK 0
#define EMPTY 2

int player;
int isGameEnd = 0;

char board[N][N];

extern int init_board();

extern int player_move();
extern int print_board();
extern int able_to_place();
extern int print_flip_number();
extern int change_turn();
extern int print_valid_flip();
extern int print_valid_range();
extern int check_result();

int main(void)
{	

int row;
int col;
int board_row;
int board_col;

init_board(); // ���� �ʱ�ȭ

/*while(isGameEnd == 0)
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
				player_move(board_row, board_col);
				
				while(able_to_flip(board_row, board_col))
					try_to_flip(board_row, board_col);
					
				print_flip_number();
				change_turn();
					
			}
			else print_invalid_flip();
		}
		else print_invalid_range();
		 
	 } 
	 
	 check_result();	*/
 } 

