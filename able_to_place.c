#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 'O'
#define BLACK 'X'
#define EMPTY ' '

extern char board[N][N];
extern int score[2];

int able_to_place(int i, int j){
	if ((board[i][j] != EMPTY) || (score[WHITE]==0) || (score[BLACK]==0))
		return 0; // ����� ���ų� �Ѱ��� ���� ����θ� ä������ ��ġ �Ұ� 
	else return 1;
}
