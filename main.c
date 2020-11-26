#include <stdio.h>
#include <stdlib.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

int score[2];
char board[N][N]; //2차원 문자 배열로 보드 나타내기 

extern void init_board(char board[][N]);
extern int player_move(int player, char board[][N]);
extern void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board); //보드 초기화 
	do	{ //do가 일단 한번 실행, while 만나서 조건 검사후 참이면 또 do 실행 
		print_board(board);
		quit = player_move(0, board); // player에 0 저장 
		if (quit == 1) break;
		print_board(board);
		quit = player_move(1, board);
		if (quit == 1) break;
	} while(quit == 0);
	return 0;
}
