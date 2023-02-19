#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//#include<string.h>
//#include<stdlib.h>
//#include<errno.h>
//int main()
//{
//	//向内存申请10个整形的空间--40个字节
//	int* p = malloc(10 * sizeof(int));//malloc(40)
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + 1) = i;
//			printf("%d ", *(p + 1) = i);
//		}
//	}
//	//当动态申请的空间不再使用时，将空间还给系统
//	free(p);
//	//空间虽然被释放，但仍可通过 *p找回空间
//	p = NULL;//使 *p与该空间彻底断开联系
//	//空指针不会随便使用
//	return 0;
//}

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	//只是使用malloc开辟的20个字节空间
//	//假设，20个字节空间不够用，希望开辟40个字节空间
//	//使用realloc调整动态开辟的内存
//
//	//realloc使用注意事项：
//	// 1.如果p指向的空间之后 有 足够的内存空间可以追加，则直接追加，然后返回p
//	// 2.如果p指向的空间之后 没有 足够的内存空间可以追加，则realloc函数会重新找一个新的区域
//	//   开辟一块满足需求的空间，并且将原来内存中的数据拷贝过来，释放旧的内存空间，最后返回新开辟的内存空间地址
//	// 3.第二种情况，需用一个新的变量来接受realloc函数的返回值
//	//	 int* ptr = realloc(p, INT_MAX); 如果ptr != NULL，则 p = ptr 
//	p = realloc(p, INT_MAX);//开辟一个最大整形值
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//常见动态内存错误：（错误操作）

////1.对NULL的解引用操作
//int main()
//{
//	//malloc的使用，要对返回值进行判断
//	int* p = (int*)malloc(40);
//	//若malloc开辟失败，p会被赋值为NULL
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//对空指针解引用不合理
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));//只能访问5个元素
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//访问10个元素
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

////4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//	}
//	free(p);//p发生了变化
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存多次释放
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		//使用
	}
	//释放
	free(p);
	//...
	free(p);
	return 0;
}

//6.动态内存开辟忘记释放（内存泄漏）