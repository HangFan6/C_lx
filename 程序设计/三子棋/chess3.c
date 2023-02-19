#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("***** 1.play   0.exit ******\n");
	printf("****************************\n");
}
void game()
{
	//创建数组，存放棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘，使其全部为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
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
int main()
{
	test();
	return 0;
}