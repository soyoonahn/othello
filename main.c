#include <stdio.h>
#include <stdlib.h>
#define N 6

void init_board(char board[][N]);
int player_move(int player, char board[][N]);
void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board);
	do	{
		print_board(board);
		quit = player_move(0, board);
		if (quit == 1) break;
		print_board(board);
		quit = player_move(1, board);
		if (quit == 1) break;
	} while(quit == 0);
	
	return 0;
}


