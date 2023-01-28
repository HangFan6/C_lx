#define _CRT_SECURE_NO_WARNINGS  //解决不安全访问警告/报错问题
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//控制指针有效性
//	while (*str != 0) //while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

////strlen--返回值为size_t == unsigned int
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//3-6=-3，被强制转换为3
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//控制指针有效性
//	assert(src != NULL);
//	char* ret = dest;
//	//while (*src != '\0')
//	//{
//	///*	*dest = *src;
//	//	dest++;
//	//	src++;*/
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;//拷贝'\0'
//
//	//拷贝scr指向的字符串到dest指向的空间，包含'\0'
//	while(*dest++ = *src++)
//	{
//		//a=b；b=i；c=t；d='\0'
//		//arr1[]="bit\0defghi"
//		;
//	}
//	//返回目的地空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//char arr1[] = "hello";//arr1只有6个字节空间，不能再在后面追加字符串
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	 }//此时dest指向'\0'
//	//2.追加
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";//6
//	char* p2 = "sqwer";//5
//	//strcmp比较的不是字符串长度
//	//比较的是对应的字符，第一个若相等，则比较下一个
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	if (ret > 0)
//		printf("p1 > p2\n");
//	if (ret == 0)
//		printf("p1 = p2\n");
//	if (ret < 0)
//		printf("p1 < p2\n");
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//控制指针有效性，不能为空指针
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等
//		str1++;
//		str2++;
//	}
//	//大于：返回>0   小于：返回<0
//	return *str1 - *str2;
//	//if (*str1 > *str2)
//	//	return 1;//大于
//	//else
//	//	return - 1;//小于
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "bc";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n",ret);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;//记录可能匹配成功的位置
//	if (*p2 == '\0')
//		return (char*)p1;//p2为空子串
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//			//*s1 && *s2 && (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//找不到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "bc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

int main()
{

	return 0;
}