#define  _CRT_SECURE_NO_WARNINGS 1

//长度不受限制的字符串函数
//strcpy() 字符串拷贝函数
//strcat() 字符串扩充函数
//strcmp() 字符串比较函数
//有些时候不安全，这些函数不考虑空间大小，强行运行


//长度受限制的函数：strncpy(),strncat(),strncmp()
//相比于长度不受限制的函数，多了一个参数，是确定长度的参数
#include <stdio.h>
#include <string.h>
//int main(void)
//{
//	char arr1[5] = "abcd";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//
//	char arr3[] = "holle";
//	char arr4[] = "add";
//	strncpy(arr3, arr4, 5);//没有6个字节的补0
//	printf("%s\n", arr3);
//	return 0;
//}

//strncat()函数如果扩充3个字符后面会自己在追加一个\0

int main(void)
{
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret = strncmp(p1, p2, 3);//打印的是0
	printf("%d\n", ret);
	return 0;
}

