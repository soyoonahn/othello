#include <stdio.h>
#include <stdlib.h>
#define N 6

void init_board(char board[][N])
{
	int x, y;
	for(x=0; x<N; x++)
		for(y=0; y<N; y++) board[x][y] = ' ';
	
	board [2][2] = 'O';
	board [2][3] = 'X';
	board [3][2] = 'X';
	board [3][3] = 'O';
}
