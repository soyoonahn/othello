#include <stdio.h>
#include <stdlib.h>

#define N 6

extern int WHITE, BLACK; 
extern char board[N][N];
extern int player;
extern int score[2];

void print_board(char board[N][N]) //보드의 현재 상태를 화면에 출력 
{
	int i, j;
	printf(" ");
	for(i=0; i<N; i++)
		printf(" %i", i);
		
		printf("\n");

	for(i=0; i<N; i++){	
		printf(" -------------\n");
		printf("%i|", i); 
		for(j=0; j<N; j++){	
			printf("%c|", board[i][j]);
			
		}
		printf("\n");
	}
printf(" -------------\n\n");
printf(" STATUS - WHITE: %d, BLACK: %d\n", score[WHITE], score[BLACK]);
}
