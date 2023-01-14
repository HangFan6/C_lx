#define _CRT_SECURE_NO_WARNINGS //解决不安全访问警告/报错问题
#include<stdio.h>
#include<string.h>
//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//define定义（带参数）宏
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	int a = 10;
	int b = 20;
	//函数方式
	int max = Max(a, b);
	printf("max = %d\n", max);
	//宏的方式
	max = MAX(a, b);
	//max = (a>b?a:b)
	printf("max = %d\n", max);
	return 0;
}

//void test()
//{
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;
//	//定义无符号的变量
//	//与unsinged int num = 20;同样效果
//	u_int num = 20;
//	printf("%d\n",num);
//}

//int main()
//{
//	//计算2个数的和
//	int num1 = 0;//定义一个初始值，可以任意
//	int num2 = 0;
//	int sum = 0;
//	//输入数据--使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号& （存入的数字将被放入一个地址）
//	//C语言语法规定，变量要定义在当前代码块（{}）的最前面
//	//int sum = 0; 不能定义在此处
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//C语言中表示真假
//	//0--假
//	//所有非0--真
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//}