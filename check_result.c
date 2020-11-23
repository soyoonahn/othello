#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 'O'
#define BLACK 'X'
#define EMPTY ' '

extern char board[N][N];
extern int score[2];


void check_result(){
	if(score[WHITE] > score[BLACK])
		printf("WHITE wins.\n");
	else if(score[WHITE] < score[BLACK])
		printf("BLACK wins.\n");
	else
		printf("Draw game.\n");
		
}
