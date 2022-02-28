#define  _CRT_SECURE_NO_WARNINGS 1

//strcat()函数，向一个字符串在追加一个字符串
//char* strcat(char* destination, const char* source);
//源字符串必须一'\0'结束
//目标空间必须足够大
//目标空间必须能修改
//字符串自己给自己追加，如何？会崩溃
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//1.找到目的地字符串的‘\0’
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main(void)
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);

	//自己实现
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}