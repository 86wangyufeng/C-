#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//srand()函数的头文件
#include <time.h>
//#define定义的标识符常量
#define ROW 3
#define COL 3


//game函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row,int col);



//告诉我们游戏的四种状态
//玩家赢  '*'
//电脑赢  '#'
//平局    'Q'
//继续    'C'

char IsWin(char board[ROW][COL], int row, int col);