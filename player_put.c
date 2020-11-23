#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

extern char board[N][N];
extern int player ;
extern int score[2];

int change_turn(){
	player = (player + 1) % 2; } 

int input_position(int *board_row, int*board_col)
{
	if (player == 1){
		printf("put a white othello: ");
		scanf("%d %d", board_row, board_col);
	}
		
	else if (player == 2){
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
