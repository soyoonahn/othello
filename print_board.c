#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6
#define WHITE 1
#define BLACK 2
#define EMPTY 0


extern char board[N][N];
extern int player;
extern int score[2];

void print_board()
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
			{
				if(board[i][j] == WHITE)
					printf("O");
				else if(board[i][j] == BLACK)
					printf("X");
				else printf(" ");
			}
			printf("|");
			
		}
		printf("\n");
	}
printf(" -------------\n");
printf(" STATUS - WHITE: %d, BLACK: %d \n", score[WHITE], score[BLACK]);
}
