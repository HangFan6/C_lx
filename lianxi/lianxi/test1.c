#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//输出9*9乘法口诀表
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i < 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);
			//%-2d：使数据输出时占用2行，不足2行时，在右边补空格
		}
		printf("\n");
	}
	return 0;
}

////求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	//不能将max初始化为0，若数组元素全为负数，就不会输出数组中的最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

////计算1-1/2+1/3-1/4+1/5-...+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int f = 0;//定义符号
//	for (i = 1; i <= 100; i++)
//	{
//		//若sum是int型，除法运算时，若分子小于分母，结果为0
//		//除数必须是浮点型，才可以得到浮点型结果
//		sum += 1.0 / i;
//		f = -f;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//数一下1-100所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位为9
//			count++;
//		//若使用else if，会漏掉99十位上的9
//		//需使用if进行并列，才可加上99十位上的9
//		if (i / 10 == 9)//十位为9
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

////打印100-200之间的素数
////规则：除了1与其本身，其他数无法将其整除
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//1.试除法:101到199之间的数能否将i整除，若不能，则为素数
//		//2.若i能写为 i=a*b，则a或b中必有一个数小于 sqrt(i)
//		//sqrt是数学math,h库函数
//		//里面的偶数不可能是素数
//
//		int j = 0;
//		//方法1：
//		/*for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}*/
//
//		//方法2：
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

////打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	//计算闰年的个数
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		////判断year是否为闰年，规则：四年一闰,百年不闰,四百年再闰
//		////1.能被4整除并且不能被100整除
//		////2.能被400整除
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ",year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//
//		//简化：
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
////（两个数取模的余数能够被其整除，这个余数就是这两个数的最大公约数）
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	//辗转相除法
//	//此处while中判断条件可不写成 m%n!=0
//	//因为当 m%n==0（假） 时，就会自动跳出循环了
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

////打印1-100之间所有3的倍速的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////将3个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现
//	//a中放最大值，b次之，c放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


////函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////define定义（带参数）宏
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}

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