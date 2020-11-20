#include <stdio.h>
#include <stdlib.h>
#define N 6

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
