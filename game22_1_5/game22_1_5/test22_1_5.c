#define _CRT_SECURE_NO_WARNINGS 1



#include "game.h"

//菜单函数
void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");
}


//游戏的整个算法实现
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘，把棋盘里全部初始化为空格
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board ,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));//随机数生成器，要用时间戳用time()函数，里面NULL是空指针
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}