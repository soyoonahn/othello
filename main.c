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

extern int input_position(int *board_row, int*board_col); // ��ǥ �Է¹ޱ� 
extern int put_position(int board_row, int board_col); // �Է¹��� ��ǥ�� �� ���� 
extern void print_board(); // ���� ��� 
extern int able_to_place(); // ��ġ �������� Ȯ�� 
//extern int able_to_flip(int i, int j); // ������ �������� Ȯ�� 
//extern int try_to_flip(int i, int j); // ������ �õ� 
//extern int print_flip_number(); // ������ ���� ��� 
extern int change_turn(); // �� �ٲٱ� 
//extern int print_invalid_flip(); // ��ġ �Ұ�(������ �Ұ�) 
//extern int print_invalid_range(); // ��ġ �Ұ�(���� ���) 
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

init_board(); // ���� �ʱ�ȭ


while(isGameEnd == 0)
{
	print_board(); //�� ��ġ�� WHITE, BLACK ���� ���
	 if (able_to_place == 0)
	{
		isGameEnd == 1; // ���� ����
		continue; // �� player ��� ��ġ�� �Ұ����ϸ� �ݺ��� ���������� ��
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

