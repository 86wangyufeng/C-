#define  _CRT_SECURE_NO_WARNINGS 1

//int strcmp(const char* str1,const char* str2) 字符串比较函数
//标准：第一个字符串大于第二个就返回大于0的数字
      //第一个字符串等于第二个字符串就返回0
      //第一个字符串小于第二个字符串就返回一个小于0的数字
//windows11环境下vs2022编译器是返回1，0，-1
//liux环境gcc编译器是返回大于0，0，小于0

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);//断言，以免是空指针
	while(*str1 == *str2)
	{
		if (*str2 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}
//int main(void)
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdefg";
//	int ret = strcmp(p1, p2);//比较两个字符串对应字母的ASCII码值大小，先从第一个字母开始比，相等就比下一个
//	printf("ret = %d\n", ret);
//
//	//strcmp()函数的实现
//	int rets = my_strcmp(p1, p2);
//	printf("rets = %d\n", rets);
//	return 0;
//}



