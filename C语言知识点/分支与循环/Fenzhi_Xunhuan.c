#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

//关机程序
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()--执行系统命令的
again:
	system("shutdown -s -t 60");
	printf("请注意，电脑将在1分钟内关机\n如果输入：留步，将取消关机\n请输入:>");
	scanf("%s", input);
	if (strcmp(input, "留步") == 0)//strcmp--比较两个字符串
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}

////goto语句
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好！\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

////实现模拟用户登录情景，并且只能登录三次
////只允许输入三次密码，如果密码正确，则提示登录成功；如果三次均输入错误，则退出程序
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		//== 不能用来判断两个字符串是否相等
//		//应使用一个库函数--strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

////演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	//解释：
//	/*例如，char arr[] = "abc";
//	  数组中包含 [a b c \0]，其下标分别是 0 1 2 3
//	  若想要得到 c 的下标
//	  利用sizeof(arr1) / sizeof(arr1[0]) - 1;
//	  得到元素个数为4，4-1=3得到的是 \0 d的下标  */
//
//	//简单方法：利用字符串长度减1，得到右下标
//	//int right = strlen(arr1) - 1;
//	while (left<right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息1秒
//		//1000ms = 1s，需要引用头文件Windows.h
//		Sleep(1000);
//		//使代码在同一行变化，需要引用头文件stdlib.h
//		system("cls");//执行系统命令的函数--cls--清空屏幕
//		left++;
//		right--;
//	}
//	////使用system函数时，需再加一行最后展示结果
//	//printf("%s\n", arr2);
//	return 0;
//}


////在一个有序数组中查找具体的某个数字n。
////编写int binsearch(int x, int v[], int n)
////功能：在v[0]<=v[1]<=v[2]<=…<=v[n-1]的数组中查找x
////(二分查找法)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//在（有序的）数组中找到7
//	//计算元素个数：数组字节大小 / 数组中一个元素的字节大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	/*当数组中没有要找的元素时，二分法查找到最后一个元素的下标后，
//	再次进行查找，会出现 左下标 > 右下标*/
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//在（有序的）数组中找到7
//	int i = 0;
//	//计算元素个数：数组字节大小 / 数组中一个元素的字节大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%c\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

////计算1!+2!+3!+4!+5!+6!+7!+8!+9!+10!的值
//int main()
//{
//	int n = 0;
//	int rec = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		rec = rec * n;//n的阶乘
//		sum = sum + rec;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int rec = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		int rec = 1;//若不加此项，计算2之后的阶乘，rec初始值将变成2，导致计算出错
//		for (i = 1; i <= n; i++)
//		{
//			rec = rec * i;
//		}
//		sum = sum + rec;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

////计 算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int rec = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		rec = rec * i;
//	}
//	printf("rec = %d\n", rec);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	//输出10个hehe
//	for (; i < 10; i++)
//	{
//		//第一个for第二次循环时，j没有被初始化，还是为10，将不再输出hehe
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//		//死循环
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int rec = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();
//	printf("请确认（Y/N）:>");
//	rec = getchar();
//	if (rec == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar：接收键盘输入的字符
//	// 因为getchar是输入字符的ASCII码的数字，所以是整形，使用int ch = 0;
//	//putchar：输出字符
//	while ((ch = getchar()) != EOF)
//	{
//		//输入EOF时，程序并不能结束，需按ctrl+z才可结束程序
//		//EOF--end of file（文件结束标志）-> -1
//		putchar(ch);
//	}
//}

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		//星期1-5输出：工作日
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//		//星期6-7输出：休息日
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		//如果输入超出范围，给一个默认提示
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while(a < 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("奇数\n");
//			printf("%d\n", a);
//		}
//		else
//			printf("偶数\n");
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	//else if (age >= 18 && age < 28)
//	//	//此处不能写为 18 <= age < 28
//	//	/*若这样写，输入为30时，
//	//	会先判断18<=30为真，即1；而1<28，输出青年*/
//	//	printf("青年\n");
//	////最后一个else可根据需要取舍
//	else
//	printf("壮年\n");
//	return 0;
//}