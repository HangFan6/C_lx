#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//struct Stu
//{
//	//描述一个学生
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5;//全局变量
//struct Stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;
//	return 0;
//}

////(链表)结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;//next存放下一个节点的地址
//};

////结构体重命名
//typedef struct Node
//{
//	int data;
//	struct Node* next;//next存放下一个节点的地址
//}Node;
//int main()
//{
//	//创建结构体变量
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

////设置默认对齐数
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
////取消设置默认对齐数
//#pragma pack()
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//计算结构体成员偏移量
//	printf("%d\n", offsetof(struct S,c));
//	printf("%d\n", offsetof(struct S,i));
//	printf("%d\n", offsetof(struct S,d));
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
//传值
void Print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
//传址
void Print2(const struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}
