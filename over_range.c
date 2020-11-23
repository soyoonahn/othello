#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 'O'
#define BLACK 'X'
#define EMPTY ' '

extern char board[N][N];
extern int score[2];

int over_board(int row, int col){
	if((row<0)||(row>=N)||(col<0)||(col>=N))
		return 0;
	else return 1;
}

