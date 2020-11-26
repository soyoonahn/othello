#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

extern char board[N][N];
extern int player;
extern int score[2];

int player_move(int player, char board[N][N])
{
	int x, y, done = 0;
	while(done != 1) {
		if(player == 0){
		
		printf("\nput a new white othello: "); 
		scanf("%d %d",&x, &y);
		//종료 조건 
		if(board[x][y] == ' ')	
			{board[x][y] = 'O';	
			score[WHITE]++;
			break;}
		else printf("invalid input! (already occupied).\n"); }
	

	else {
		printf("\nput a new black othello: "); 
		scanf("%d %d",&x, &y);
		//종료 조건 
		if(board[x][y] == ' ')	
			{board[x][y] = 'X';	
			score[BLACK]++;
			break;}
		else printf("invalid input! (already occupied).\n"); }}
	return 0;
}

