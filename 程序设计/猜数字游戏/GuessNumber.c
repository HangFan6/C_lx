#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#include<time.h>

//猜数字游戏
//1.电脑自动生成一个随机数
//2.猜数字
void menu()
{
	printf("********************************\n");
	printf("****  1: play    0: exit    ****\n");
	printf("********************************\n");
}

//RAND_MAX -- 生成数在32767以内
void game()
{
	int ret = 0;
	int guess = 0;
	//1.电脑自动生成一个随机数
	//用时间戳生成一个随机数的生成起点
	//时间戳：当前计算机的时间 - 计算机的起始时间（1970.1.1.0:0:0）=（xxx）
	//使用time_t time(time_t *timer)
	ret = rand() % 100 + 1;//生成随机数1-100之间，需头文件stdlib.h
   //printf("%d\n", ret);
   //2.猜数
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
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
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}