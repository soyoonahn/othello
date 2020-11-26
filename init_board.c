#include <stdio.h>
#include <stdlib.h>

#define N 6

//extern을 이용하여 main파일의 변수 참조 
extern char board[N][N];
extern int player;
extern int score[2];
extern int WHITE, BLACK; 

void init_board(char board[][N])
{
	int x, y;
	for(x=0; x<N; x++)
		for(y=0; y<N; y++) board[x][y] = ' '; //board [x][y]에 모두 공백을 출력  
		
	//초기 white와 black의 배치
	board [N/2-1][N/2-1] = 'O';  
	board [N/2-1][N/2] = 'X';
	board [N/2][N/2-1] = 'X';
	board [N/2][N/2] = 'O';
	
	//초기 white와 black의 점수
	score[WHITE] = 2;  
	score[BLACK] = 2;
}


