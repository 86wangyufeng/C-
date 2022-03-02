#define  _CRT_SECURE_NO_WARNINGS 1
#include <errno.h>
#include <stdio.h>
#include <string.h>
//char* strerror(int errnum);返回错误码，所对应的错误信息
//int main(void)
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", 'r');//‘r’这是读这个文件的意思
//
//	if (pf == NULL)//打不开就返回NULL,但打不开的原因有很多，比如权限不够，没有这个文件所以返回的错误码不同
//	{
//		printf("%s\n", strerror(errno));//errno是一个全局的错误变量，当c语言库函数在运行过程中发生了错误就会把对应的错误码赋值到errno中
//	}
//	else
//	{
//		printf("成功打开\n");
//	}
//	return 0;
//	printf("%s\n", strerror(0));
//}