#include <stdio.h>
#include <stdlib.h>

#define N 6		  //macro 이용하여 보드의 칸 수를 정의

int WHITE, BLACK; 

int score[2]; 	  //white와 black의 score를 저장할 배열 선언. white, black 두가지이므로 크기를 2로 선언. 
char board[N][N]; //2차원 문자 배열로 NxN 크기의 보드 나타내기.  

extern void init_board(char board[][N]);
extern int player_move(int player, char board[][N]);
extern void print_board(char board[][N]);

int main(void)
{	
	char board[N][N];
	int quit=0;

	init_board(board); 			      //보드 초기화 함수 실행 
	do	{ 			  				  //do가 일단 한번 실행, while 만나서 조건 검사후 참이면 또 do 실행 
		print_board(board); 		  //현재 보드 상태 출력 
		quit = player_move(0, board); // player_move 함수 실행, player = 0(white's turn)
		if (quit == 1) break; 		  //종료조건이 만족되면 quit=1(return=1)이 되어 do~while문 종료
		 
		print_board(board);			  // player = 1(black's turn) 위와 유사하므로 주석 생략 
		quit = player_move(1, board);
		if (quit == 1) break;
		
	} while(quit == 0);				 //quit = 0인 동안 do~while문 실행 
	return 0;
}
