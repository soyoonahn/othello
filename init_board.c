#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

extern char board[N][N];
extern int score[2];

void init_board(char board[][N])
{
	int x, y;
	for(x=0; x<N; x++)
		for(y=0; y<N; y++) board[x][y] = ' '; //board [x][y]에 모두 공백을 넣은 후  
	
	board [N/2-1][N/2-1] = 'O'; //초기 white와 black의 배치 
	board [N/2-1][N/2] = 'X';
	board [N/2][N/2-1] = 'X';
	board [N/2][N/2] = 'O';
	
	score[WHITE] = 2; //초기 white와 black의 점수 
	score[BLACK] = 2;
}


