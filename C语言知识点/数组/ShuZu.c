#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	//创建数组并初始化--存放整形10个
//	//不完全初始化，剩余元素默认为0
//	int arr1[10] = { 1,2,3 };//初始化3个元素
//	char arr2[5] = { 'a','b' };//初始化2个元素
//	char arr3[5] = { 'a',98 };//初始化2个元素：仍放置a b，98是b的ASCII码值
//	char arr4[5] = "ab";//初始化3个元素：a b \0
//	char arr5[] = "abcdef";//初始化7个元素：a b c d e f \0
//	printf("%d\n", sizeof(arr5));
//	//sizeof 计算arr5所占空间的大小
//	//7个元素--char：7*1(byte) = 7(byte)
//	printf("%d\n", strlen(arr5));
//	//strlen 求字符串的长度--\0之前的字符个数
//	//[a b c d e f \0]  \0是结束标志，不算入字符长度
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%c\n", arr[3]);//打印元素d
//	//打印数组中的所有元素
//
//	//方法1：
//	//for (i = 0; i < sz; i++)
//	//方法2：
//	//for (i = 0; i < (int)strlen(arr); i++)
//	//方法3：
//	//strlen 默认打印无符号整形
//	for (i = 0; i < 6; i++)
//		printf("%c ", arr[i]);
//	return 0;
//}

////数组的存储
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

////访问二维数组，并输出所有元素
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//冒泡排序：（多趟）两两相邻元素依次进行比较并交换
//n个元素进行冒泡排序，需要n-1趟排序才可完成
void rise_sort(int arr[], int sz)
{
	//确定冒泡排序趟数
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//在void rise_sort(int arr[])中计算数组中元素的个数，接收到的数组只有一个元素
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序
		int j = 0;
		int flag = 1;//假设这一趟需排序的数据已经有序了
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序数据不完全有序
			}
		}
		//防止该趟待排序元素已经有序了，还是会被比较
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序--升序
	//对数组arr进行传参，实际上传递过去的是数组首元素的地址
	rise_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

////数组名是首元素地址。（有两个例外）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)：数组名表示整个数组；sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名：数组名表示整个数组；&数组名，取出的是整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}