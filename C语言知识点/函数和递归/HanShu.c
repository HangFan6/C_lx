#define _CRT_SECURE_NO_WARNINGS 1  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//strcpy--拷贝函数
int main()
{
	char arr1[] = "bit";
	char arr2[] = "########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}