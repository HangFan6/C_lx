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

#define CAT(X, Y) X##Y
int main()
{
	int Class84 = 2019;
	printf("%d\n", CAT(Class, 84));
	//CAT(Class, 84)等价于Class84
	return 0;
}