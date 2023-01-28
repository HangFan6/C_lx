#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//==========位段=============
////段位--二进制位
//struct S
//{
//	int a : 2;//a占2 bit
//	int b : 5;//b占5 bit
//	int c : 10;
//	int d : 30;
//};//共需要47 bit -- 占6个字节 * 8 bit = 48 bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	//printf("%d\n", sizeof(s));
//	return 0;
//}

////==========枚举=============
//enum Color
//{
//	RED = 3,
//	GREEN,
//	BULE
//};
//int main()
//{
//	printf("%d %d %d\n", RED, GREEN, BULE);
//	return 0;
//}

//==========共用体=============
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

union Un
{
	int a;//4
	char arr[5];//5
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}