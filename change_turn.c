#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 0
#define BLACK 1
#define EMPTY 2

extern char board[N][N];
extern int player;
extern int score[2];

int change_turn(){
	player = (player + 1)%2;
} 
