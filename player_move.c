#include <stdio.h>
#include <stdlib.h>

#define N 6

//extern을 이용하여 main파일의 변수 참조
extern char board[N][N];
extern int player;
extern int score[2];
extern int WHITE, BLACK; 

int player_move(int player, char board[N][N])
{
	int x, y, done = 0;
	while(done != 1) { 								//done값이 1이 아니면 계속 실행 
		if(player == 0){ 							//white's turn 
			printf("\nput a new white othello: "); 
			scanf("%d %d",&x, &y); 
			if(board[x][y] == ' ')	{ 				//입력받은 자리가 빈자리일 경우 
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){	//입력받은 자리가 빈자리인 경우 중, 보드의 범위를 벗어나는 경우 
					printf("invalid input! (invalid range). \n");
					continue;}						//다시 if문 반복 시작 
				else board[x][y] = 'O';				//입력받은 자리가 빈자리이면서 보드 범위 내이면 O를 출력 
				score[WHITE]++;						//O가 출력되었으므로 WHITE의 점수에 1을 더함 
				break;} 							//if문 빠져나가기 
			
			else {									//입력받은 자리가 빈자리가 아닐 경우 
				if ((x<0)||(y<0)||(x>=N)||(y>=N)){ 	//입력받은 자리가 보드의 범위를 벗어나는 경우 
					printf("invalid input! (invalid range)\n");
					continue;}
				else { 								//입력받은 자리가 빈자리 아닌 경우 중, 보드의 범위를 벗어나지 않는 경우 
				printf("invalid input! (already occupied)\n");
					continue;} 
				}	
					}
	

	else {											//black's turn (white's turn일 때와 유사하므로 주석 생략) 
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
