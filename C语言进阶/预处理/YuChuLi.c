#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

////写日志文件
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}

//#define SQUARE(X) X*X
//int main()
//{
//	int ret1 = SQUARE(5);
//	int ret2 = SQUARE(5 + 1);
//	printf("ret1 = %d\n", ret1);
//	printf("ret2 = %d\n", ret2);
//	//宏是替换，不是传参
//	//ret2 == 5+1*5+1
//	return 0;
//}

//#define MAX 5
//#define SQUARE(X) (X)*(X)
//int main()
//{
//	int ret = 10 * SQUARE(MAX);
//	printf("%d\n", ret);
//	return 0;
//}

////将参数插入到字符串中
//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//// #X → "X"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a)
//	//printf中输入多个字符串，输出认为是合并的一个字符串
//	PRINT(b);
//	return 0;
//}

//#define CAT(X, Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	//CAT(Class, 84)等价于Class84
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++));
//	//10>11为假，a=11，b=12，max结果为b=12，此后a=11，b=13
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}


//#define MAX(X,Y) ((X)>(Y)?(X):(Y))//宏
//int Max(int x, int y)//函数
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 11;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用时会有函数调用和返回的开销
//	int max = Max(a, b);
//	float max2 = MAX(c, d);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	printf("%f\n", max2);
//	return 0;
//}

////命令行定义
//int main()
//{
//	int arr[SZ] = { 0 };
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf( "%d ",arr[i]);
//#endif // DEBUG
//	}
//	return 0;
//}

//写一个宏，计算偏移量
struct S
{
	char c1;
	int a;
	char c2;
};
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}