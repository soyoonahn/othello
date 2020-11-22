#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 0
#define BLACK 1
#define EMPTY 2

extern char board[N][N];
extern int score[2];

int able_to_place(int i, int j){
	if ((board[i][j] != EMPTY) || (score[WHITE]==0) || (score[BLACK]==0))
		return 0;
	else return 1;
}
