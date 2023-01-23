#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void delay(unsigned int i)
{
	unsigned int j;
	for (; i > 0; i--)
		for (j = 0; j < 125; j++)
		{
			;
		}
}
int main()
{
	while (1)
	{
		printf("hehe!!!\n");
		delay(5000000);
	}
	return 0;
}
