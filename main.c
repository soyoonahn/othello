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

init_board(); // 게임 초기화

while(isGameEnd == 0)
{
	print_board(); //판 배치와 WHITE, BLACK 점수 출력
	if (able_to_place == 0)
	{
		isGameEnd == 1; // 게임 종료
		continue; // 두 player 모두 배치가 불가능하면 반복문 빠져나가야 함
		
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

