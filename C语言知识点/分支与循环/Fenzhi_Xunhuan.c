#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int ch = 0;
	//getchar：接收键盘输入的字符
	//putchar：输出字符
	while ((ch = getchar()) != EOF)
	{
		//输入EOF时，程序并不能结束，需按ctrl+z才可结束程序
		//EOF--end of file（文件结束标志）-> -1
		putchar(ch);
	}
}

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