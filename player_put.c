#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 'O'
#define BLACK 'X'
#define EMPTY ' '

extern char board[N][N];
extern int player;
extern int score[2];

int input_position(int *board_row, int*board_col)
{
	if (player == WHITE){
		printf("put a white othello: ");
		scanf("%d %d", board_row, board_col);
	}
		
	else if (player == BLACK){
		printf("put a black othello: ");
		scanf("%d %d", board_row, board_col);
	}

}

int put_position(int board_row, int board_col)
{
	board[board_row][board_col] = player;
	score[player]++;
	//try_to_flip(board_row, board_col);
}
