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


////计算器实现
//void menu()
//{
//	printf("***********************\n");
//	printf("**** 1.Add  2.Sub  ****\n");
//	printf("**** 3.Mul  4.Div  ****\n");
//	printf("****     0.Exit    ****\n");
//	printf("***********************\n");
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
//方法1：
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出计算\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////优化1：
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int (*pArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int rec = pArr[input](x, y);
//			printf("%d\n", rec);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算\n");
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//}
////优化2：
//void Calc(int (*pf)(int, int))
//{
//	//pf接收主函数中Calc中调用的函数地址
//	int x = 0, y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出计算\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取数组的地址
//
//	int (*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是函数指针的数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppArr 是一个数组指针，指针指向的数组有4个元素
//	//指向数组的每个元素类型是一个函数指针 int (*)(int,int)
//	return 0;
//}



////冒泡排序：（多趟）两两相邻元素依次进行比较并交换
////n个元素进行冒泡排序，需要n-1趟排序才可完成
////只能对 整形 数组元素排序
//void rise_sort(int arr[], int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//在void rise_sort(int arr[])中计算数组中元素的个数，接收到的数组只有一个元素
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		int flag = 1;//假设这一趟需排序的数据已经有序了
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序数据不完全有序
//			}
//		}
//		//防止该趟待排序元素已经有序了，还是会被比较
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
////qsort--C语言库函数--接收任意类型数组首元素地址
//struct stu
//{
//	char name[20];
//	int age;
//};
////void* 的指针类型，可以接收任意类型的地址
////void* 的指针类型，不能进行解引用操作，因为不知道类型，不确定需要访问几个字节
////void* 的指针类型，不能进行+-整数的操作
////库函数--qsort：
// /*void qsort(void* base, 
//			size_t num, 
//			size_t width,
//			int(*cmp)(const void* e1, const void* e2)
//			);*/
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的大小
//	/*e1 = e2：返回=0
//	e1 < e2：返回<0
//	e1 > e2：返回>0*/
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	//return *(float*)e1 - *(float*)e2;  //从float转换到int可能丢失数据
//	if (*(float*)e1 - *(float*)e2 == 0)
//		return 0;
//	else if (*(float*)e1 - *(float*)e2 > 0)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[] = { 9.0,3.0,8.0,1.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.2f ", f[i]);
//	}
//	printf("\n");
//}
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test3()
//{
//	struct stu s[3] = { {"张三",20},{"李四",30},{"吴宇",15} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//	printf("\n");
//}
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test4()
//{
//	struct stu s[3] = { {"张三",20},{"李四",30},{"吴宇",15} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//	}
//}
//int main()
//{
//	test1();//对 整形 数组排序
//	test2();//对 浮点型 数组排序
//	test3();//对 结构体 年龄排序
//	test4();//对 结构体 名字排序
//	return 0;
//}


//自定义函数 对任意类型数组排序
void Swap(char* buf1, char* buf2, int width)
{
	//char*只占一个字节，元素交换是一对字符一对字符地交换
	//故：需要知道这两个字符各占几个字节，推出需要交换几次字符
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//1.待排序数组的首元素地址
//2.待排序数组元素个数
//3.待排序数组的每个元素的宽度大小--单位为字节
//4.待排序数组的元素的数据类型（未知），待比较的两个元素的类型（未知）
void rise_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	//确定冒泡排序趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序
		int j = 0;
		int flag = 1;//假设这一趟需排序的数据已经有序了
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			//1.首元素地址类型 强制转换为char*
			//(char*)base+1：首地址每次只加一个字节；
			//(char*)base+j*width：首地址每次加j个数组类型元素的字节，定位到下标为j的元素地址。
			//2.定位到下标为j+1的元素地址
			//3.将两个地址中存储的元素进行比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
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
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序函数调用
	rise_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
struct stu
{
	char name[20];
	int age;
};
int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[3] = { {"张三",20},{"李四",30},{"吴宇",15} };
	int sz = sizeof(s) / sizeof(s[0]);
	rise_sort(s, sz, sizeof(s[0]), cmp_stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
}
int main()
{
	test1();
	printf("\n");
	test2();
	return 0;
}