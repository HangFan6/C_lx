#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int a = -1;
//	//负数在内存中存储的是补码
//	//二进制数的最高位表示符号位：0为正，1为负
//	//1000000000 0000000000 0000000000 01--原码
//	//1111111111 1111111111 1111111111 10--反码
//	//1111111111 1111111111 1111111111 11--补码=反码+1
//	int b = a >> 1;//补码算术右移，符号位不变
//	//得到的补码还是全是1，反推回去，原码不变，b=-1
//	printf("%d\n", b);
//	return 0;
//}

////不能创建临时变量，实现两个数的交换。
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	printf("before: a = %d b = %d\n", a, b);
//	//加减法：（可能会溢出）
//	//缺点：若a、b较大，a+b可能会超出整形范围值
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//异或法：
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("after: a = %d b = %d\n", a, b);
//	return 0;
//}

////求一个整数储存在内存中的二进制中1的个数。
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num中的补码中有几个1
//
//	//存在问题：负数计算有误
//	//while (num)//即num != 0
//	//{
//	//	//若num=3 -- 011
//	//	if (num % 2 == 1)//得到001
//	//		count++;
//	//	num = num / 2;//得到01
//	//}
//
//	//若num&1 == 1，则最低位为1；若num&1 == 0，则最低位为0
//	//将num向右移位1
//	//若num&1 == 1，则最低位为1；若num&1 == 0，则最低位为0（倒数第二位）
//	//32bit，移位32次
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//s为short型，2个字节
	printf("%d\n", s);//sizeof内部表达式不参与运算
	return 0;
}