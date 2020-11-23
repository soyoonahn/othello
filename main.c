#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 1
#define BLACK 2
#define EMPTY 0

char board[N][N];
int player = 0;
int score[2];
int isGameEnd = 0;



extern int init_board();  

extern int input_position(int *board_row, int*board_col); // 좌표 입력받기 
extern int put_position(int board_row, int board_col); // 입력받은 좌표에 돌 놓기 
extern void print_board(); // 보드 출력 
extern int able_to_place(); // 배치 가능한지 확인 
//extern int able_to_flip(int i, int j); // 뒤집기 가능한지 확인 
//extern int try_to_flip(int i, int j); // 뒤집기 시도 
//extern int print_flip_number(); // 뒤집은 개수 출력 
extern int change_turn(); // 턴 바꾸기 
//extern int print_invalid_flip(); // 배치 불가(뒤집기 불가) 
//extern int print_invalid_range(); // 배치 불가(범위 벗어남) 
extern int check_result(); 
extern int over_board();
extern int print_invalid_occupied();
int main(void)
{	

int row;
int col;
int board_row;
int board_col;
int i, j;

init_board(); // 게임 초기화


while(isGameEnd == 0)
{
	print_board(); //판 배치와 WHITE, BLACK 점수 출력
	 if (able_to_place == 0)
	{
		isGameEnd == 1; // 게임 종료
		continue; // 두 player 모두 배치가 불가능하면 반복문 빠져나가야 함
	}
	
		if ((board[i][j] == EMPTY)) {
			input_position(&board_row, &board_col);
			put_position(board_row, board_col);
		}
		
		else print_invalid_occupied(); 
		
	
	 } 
	
change_turn();	
	check_result(); 	
 } 

