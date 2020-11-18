#include <stdio.h>
#include <stdlib.h>

#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void init_board(char board[N][N]);
int player_put(int player, char board[N][N]);
void print_board(char board[N][N]);

int main(int argc, char *argv[]) {
	
	char board[N][N];
	int quit = 0;
	
	init_board(board);
	print_board(board); // 보드를 화면에 출력
	
	return 0;
}

void init_board(char board[N][N])
{
	int x, y;
	for(x=0;x<N;x++)
		for(y=0;y<N;y++) board[x][y]=' '; //2차원 배열을 ''로 초기화 
}

int player_put(int player, char board[N][N]) 
{
	int x, y, done = 0;
	while (done != 1) {
	printf("put a new white othello: ");
	scanf("%d %d", &x, &y);
	/*if 
	
	else printf("");
	else if printf("");*/
	}
	if (player == 0) board[x][y] = 'X';
	else board[x][y] = '0';
	return 0;
}

void print_board(char board[N][N])
{
	int i;
	printf(" 0 1 2 3 4 5\n");
	for (i=0;i<N;i++){
		printf(" -------------\n");
		printf("%d",i);
		printf("| %c \n", board[N][0]);
		}
		printf(" -------------\n");
	}
	
