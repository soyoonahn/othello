#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0


extern char board[N][N];
extern int score[2];

int able_to_place(int i, int j){
	if ((board[i][j] != EMPTY))
		return 0;
	else return 1;
}
