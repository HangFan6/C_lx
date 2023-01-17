#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

////交换两个整形变量
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

////memset--内存设置函数
//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

////strcpy--拷贝函数
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	//将数组arr1拷贝到数组arr2中
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


////练习1：
////写一个可以判断一个数是否为素数的函数。
//int is_sushu(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;//返回到函数
//	}
//	return 1;//程序若运行至此处，必然有j==n
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_sushu(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////练习2：
////写一个判断某年是否为闰年的函数。(四年一润，百年不润，四百年再润)
//int is_ryear(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_ryear(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

////练习3：
////写一个函数，可以实现一个整形有序数组的二分查找。
////找到：返回下标  找不到：返回-1
//int number_find(int arr[], int n, int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	//left <= right的 = 不可省
//	//若要查找的数，需在剩余最后一个数时查找，则无法进入循环
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;//要查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入在1-10要查找的数：");
//	scanf("%d", &x);
//	//下标接收
//	int rec = number_find(arr, x, sz);//函数中传递的arr是数组的首地址
//	//sz不能放在函数体中求，函数体中的arr实际上是指针
//	if (rec == -1)
//		printf("找不到该数字\n");
//	else
//		printf("找到了，下标为：%d\n", rec);
//	return 0;
//}

//练习4：
//写一个函数，每调用一次此函数，就会将num的值增加1。
void Add(int* p)
{
	//*p++中++只作用于p
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}