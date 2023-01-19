#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

////描述一个学生
////名字、年龄、电话、性别
////struct--结构体关键字  student--结构体标签  struct student--结构体类型
////结构体定义方法1：
//struct student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1、s2、s3是3个全局的结构体变量
////结构体定义方法2：
//typedef struct student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//struct student的名字被改为了stu，此处stu为类型
//int main()
//{
//	struct student s;//s为局部的结构体变量
//	stu s2;
//	return 0;
//}

////结构体初始化
//typedef struct student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	//初始化：定义变量的同时进行赋值
//	stu s1 = { "张三",20,"15823546783","男" };
//	struct student s2 = { "旺财",30,"17834598376","保密" };
//	printf("%d\n", s2.age);
//	printf("%s\n", s1.name);
//	return 0;
//}

////嵌套结构体的初始化
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr1[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr1 };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

typedef struct student
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void Print1(stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
	printf("\n");
}
void Print2(stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}
int main()
{
	stu s = { "李四",40,"15835689745","男" };
	//打印结构体数据
	//Print2的打印方法更好
	Print1(s);
	Print2(&s);
	return 0;
}