#include <stdio.h>
#include <stdlib.h>

#define N 6

//extern�� �̿��Ͽ� main������ ���� ����
extern char board[N][N];
extern int player;
extern int score[2];
extern int WHITE, BLACK; 

int player_move(int player, char board[N][N])
{
	int x, y, done = 0;
	while(done != 1) { 								//done���� 1�� �ƴϸ� ��� ���� 
		if(player == 0){ 							//white's turn 
			printf("\nput a new white othello: "); 
			scanf("%d %d",&x, &y); 
			if(board[x][y] == ' ')	{ 				//�Է¹��� �ڸ��� ���ڸ��� ��� 
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){	//�Է¹��� �ڸ��� ���ڸ��� ��� ��, ������ ������ ����� ��� 
					printf("invalid input! (invalid range). \n");
					continue;}						//�ٽ� if�� �ݺ� ���� 
				else board[x][y] = 'O';				//�Է¹��� �ڸ��� ���ڸ��̸鼭 ���� ���� ���̸� O�� ��� 
				score[WHITE]++;						//O�� ��µǾ����Ƿ� WHITE�� ������ 1�� ���� 
				break;} 							//if�� ���������� 
			
			else {									//�Է¹��� �ڸ��� ���ڸ��� �ƴ� ��� 
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){ 	//�Է¹��� �ڸ��� ������ ������ ����� ��� 
					printf("invalid input! (invalid range)\n");
					continue;}
				else { 								//�Է¹��� �ڸ��� ���ڸ� �ƴ� ��� ��, ������ ������ ����� �ʴ� ��� 
				printf("invalid input! (already occupied)\n");
					continue;} 
				}	
					}
	

	else {											//black's turn (white's turn�� ���� �����ϹǷ� �ּ� ����) 
		printf("\nput a new black othello: "); 
			scanf("%d %d",&x, &y);
			if(board[x][y] == ' ')	{
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){ 
					printf("invalid input! (invalid range)\n");
					continue;}
				else board[x][y] = 'X';	
				score[BLACK]++;
				break;}
			
			else {
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){ 
					printf("invalid input! (invalid range)\n");
					continue;}
				else {
					printf("invalid input! (already occupied)\n");
					continue;}
				 }
		
	}}
return 0;}
