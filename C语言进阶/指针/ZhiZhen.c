#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串，不能被修改
//	//最好写为const char* p
//	*p = 'W';//存在段错误
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20, c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//
//	//int* p[10]由于[]的优先级高于*，认为p是一个数组，用于存放指针（数组指针）
//	int (*p)[10] = &arr;//存放数组的地址
//	//先说明p是一个指针，指向数组，类型为整形
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//方法1：（最优）
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//方法2-A：
//	//int (*p)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p+i));//*p == arr
//	//}
//	//方法2-B：
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}

////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
////参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//*(*(p+i)+j)等于(*(p+i))[j]
//			//p+i是找到某一行的地址，*(p+i)进行解引用
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr - 数组名 - 是首元素地址（二维数组中是第一行数组地址）
//	print2(arr, 3, 5);
//	return 0;
//}


////数组传参和指针传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int* arr[])
//{}
//void test2(int* arr[10])
//{}
//void test2(int** arr2)//一级指针的首元素地址放于二级指针中
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])//行号可以省略，列号不能省略
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	return 0;
//}

////错误传参方法：
////void test(int* arr)  //整形指针用于存放整形地址，arr是第一行数组的地址
////void test(int* arr[5])
////void test(int** arr) //二级指针用于存放一级指针变量的地址
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//数组名是首元素地址（第一行数组的地址）
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;//首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p传参
//	print(p, sz);
//	return 0;
//}

//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	//test1传参方法：
//	int a = 10;
//	int* p = &a;
//	test1(&a);
//	test1(p);
//	//test2传参方法：
//	char ch = 'W';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//void test1(int** ptr)
//{
//	printf("num = %p\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int b = 2;
//	int* p = &n;//一级指针
//	int** pp = &p;//二级指针
//	int* arr[10] = { &n,&b };
//	//int* arr[10];
//	//传输参数方法：
//	test(pp);//传入二级指针变量
//	test(&p);//传入一级指针变量的地址仍为二级指针
//	test1(arr);//传入指针数组
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//&函数名 和 函数名 都是函数的地址
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add;
//	//此处函数变量名可写，可不写 int(*p)(int x, int y) = Add;
//	printf("%d\n", p(2, 3));//p是一个函数的地址，可以直接调用函数
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit!");
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//需要一个数组，可以存放4个函数的地址--函数指针的数组
//	int(*p)(int, int) = Add;//Add,Sub,Mul,Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//parr可以不用解引用
//		//i=0时，调用Add；i=1时，调用Sub；......
//	}
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向 my_strcpy
////写一个函数指针的数组，能够存放4个my_strcpy
//char* (*pf)(char*, const char*);
//char* (*parr[4])(char*, const char*);

//计算器实现
void menu()
{
	printf("***********************\n");
	printf("**** 1.Add  2.Sub  ****\n");
	printf("**** 3.Mul  4.Div  ****\n");
	printf("****     0.Exit    ****\n");
	printf("***********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0, y = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出计算\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

//int main()
//{
//
//	return 0;
//}