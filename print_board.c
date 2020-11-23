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

void print_board()
{
	int i, j;
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
printf(" -------------\n");
printf(" STATUS - WHITE: %d, BLACK: %d \n", score[WHITE], score[BLACK]);
}
