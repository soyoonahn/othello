#include <stdio.h>
#include <stdlib.h>

#define N 6

void init_board(char board[][N]);
int player_move(int player, char board[][N]);
void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board);
	do	{
		print_board(board);
		quit = player_move(0, board);
		if (quit == 1) break;
		print_board(board);
		quit = player_move(1, board);
		if (quit == 1) break;
	} while(quit == 0);
	return 0;
}

void init_board(char board[][N])
{
	int x, y;
	for(x=0; x<N; x++)
		for(y=0; y<N; y++) board[x][y] = ' ';
	
	board [2][2] = 'O';
	board [2][3] = 'X';
	board [3][2] = 'X';
	board [3][3] = 'O';
}


int player_move(int player, char board[N][N])
{
	int x, y, done = 0;
	while(done != 1) {
		printf("\nput a new white othello: ");  
		scanf("%d %d",&x, &y);
		if(x == -1 && y == -1)	return 1;
		if(board[x][y] == ' ')	break;
		else printf("invaild input!\n"); 
	}
	if(player == 0)	board[x][y] = 'X';

	else board[x][y] = '0';
	return 0;
}

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

