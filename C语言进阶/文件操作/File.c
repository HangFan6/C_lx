#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//二进制的形式写入文件
//	fwrite(&a, 4, 1, pf);//写一个四个字节的数据，放在pf中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//int main()
//{
//	//打开文件test.txt
//	//相对路径写法：（已知文件 在 当前程序文件的文件夹中）
//	//.. 表示上上一级路径
//	// // fopen("..\..\test.txt", "r");
//	//.. 表示上一级路径
//	// fopen("..\test.txt", "r");
//	
//	//.  表示当前路径
//	FILE* pf = fopen("test.txt", "r");
//	//绝对路径写法：（打开的文件在 不同于 程序文件路径的文件夹中）
//	//FILE* pf2 = fopen("E:\\VS2019\\C_learning\\C语言进阶\\文件操作\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;//结束代码
//	}
//	else
//	{
//		//打开成功
//		printf("打开成功\n");
//		//读文件
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("ab.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("ab.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("ab.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);//buf中已经拥有一个换行
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("ab.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n",pf);
//	fputs("world ",pf);
//	fputs("flower",pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入读取
//	fputs(buf, stdout);//输出到标准输出流
//	//等价于：
//	/*gets(buf);
//	puts(buf);*/
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	//3.14f表示float类型，不使用表示double类型
//	FILE* pf = fopen("ab.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	//3.14f表示float类型，不使用表示double类型
//	FILE* pf = fopen("ab.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式读文件（输入）
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf中
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//
//	//从buf中读取格式化数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

typedef struct S
{
	char name[20];
	int age;
	double score;
}S;
int main()
{
	S s = { "张三",20,95.5 };
	FILE* pf = fopen("ab.txt", "wb");
	if (pf == NULL)
	{
		return 0;
	}
	//二进制形式写文件
	fwrite(&s, sizeof(S), 1, pf);

	fclose(pf);
	pf = NULL;
	return 0;
}

//typedef struct S
//{
//	char name[20];
//	int age;
//	double score;
//}S;
//int main()
//{
//	S tmp = { 0 };
//	FILE* pf = fopen("ab.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制形式读文件
//	fread(&tmp, sizeof(S), 1, pf);
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}