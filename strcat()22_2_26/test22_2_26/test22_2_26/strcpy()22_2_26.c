#define  _CRT_SECURE_NO_WARNINGS 1

//char* strcpy(char* destination, const chaar* source) 字符串拷贝函数
//源字符串必须有‘\0’
//并且要把'\0'拷贝到目的地空间里
//目标空间足够大，确保能放下源字符串
//学会模拟实现
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;

	//拷贝src指向的字符串到dest指向的空间，包含‘\0‘
	while (*dest++ = *src++)
	{
		;
	}
	//返回目的地空间都起始位置
	return ret;
}
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	//自己实现strcpy()函数
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}