#include <stdio.h>
#include <stdlib.h>

#define N 6

//extern�� �̿��Ͽ� main������ ���� ����
extern char board[N][N];
extern int player;
extern int score[2];
extern int WHITE, BLACK; 

void print_board(char board[N][N]) //������ ���� ���¸� ȭ�鿡 ��� 
{
	//column ��ȣ ��� 
	int i, j;
	printf(" ");
	for(i=0; i<N; i++)
		printf(" %i", i);
		
		printf("\n");

	
	for(i=0; i<N; i++){	
		printf(" -------------\n");
		printf("%i|", i); //row ��ȣ ���
		for(j=0; j<N; j++){	
			printf("%c|", board[i][j]); //board[i][j]�� �ش��ϴ� ���� ��� 
			
		}
		printf("\n");
	}
printf(" -------------\n\n");
printf(" STATUS - WHITE: %d, BLACK: %d\n", score[WHITE], score[BLACK]);
} //white�� black�� ���� score ��� 
