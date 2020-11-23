#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

#define WHITE 'O'
#define BLACK 'X'
#define EMPTY ' '

extern char board[N][N];
extern int player;
extern int score[2];

int init_board()
{
memset(board, EMPTY, sizeof(board));
board[(N/2)-1][(N/2)-1] = WHITE;
board[(N/2)][(N/2)] = WHITE;
board[(N/2)-1][(N/2)] = BLACK;
board[(N/2)][(N/2)-1] = BLACK;

score[WHITE] = 2;
score[BLACK] = 2;
player = WHITE;
}
