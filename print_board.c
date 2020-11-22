#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 0
#define BLACK 1
#define EMPTY 2

extern char board[N][N];
extern int player;
extern int score[2];

void print_board(char board[N][N])
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
printf(" -------------\n");
}
