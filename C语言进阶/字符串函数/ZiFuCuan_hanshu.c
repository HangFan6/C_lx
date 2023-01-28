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

//int main()
//{
//	char arr[] = "het@bidie.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	//het\0bidie.tech
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	////het@bidie\0tech
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//优化：
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include<errno.h>
//int main()
//{
//	//C语言库函数设置的错误码
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	char* str = strerror(errno);
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生错误，会把对应的错误码赋值到errno中
//	printf("%s\n", str);
//	//将错误码翻译为错误信息
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file successful");
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char ch = '87';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char ch = tolower('Q');
//	char hg = toupper('m');
//	putchar(ch);
//	putchar(hg);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	//strcpy(arr2, arr1);//char* dest, char* src
//	memcpy(arr2, arr1, sizeof(arr1));
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//		//arr1使用小端存储:01 00 00 00、02 00 00 00......
//		//arr2拷贝时先拷贝01，在拷贝00 = \0，停止拷贝。
//	}
//	return 0;
//}

//struct s
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);//dest和src不能等于NULL
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	/*int i = 0;
//	struct s arr1[] = { {"张三",20},{"李四",25} };
//	struct s arr2[3] = { 0 };
//	my_memcpy(arr2, arr1,sizeof(arr1));
//	for (i = 0; i < 2; i++)
//	{
//		printf("%s ", arr2[i].name);
//	}*/
//
// 	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//将12345拷贝到34567的位置
//	//my_memcpy(arr + 2, arr, 20);//1 2 1 2 1 2 1 8 9 10
//	memmove(arr + 2, arr, 20);//处理内存重叠情况
//	for (i = 0; i < 10; i++)
//	{
// 		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//从前向后拷贝
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	//从后向前拷贝
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//将12345拷贝到34567的位置
//	my_memmove(arr + 2, arr, 20);//处理内存重叠情况
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}