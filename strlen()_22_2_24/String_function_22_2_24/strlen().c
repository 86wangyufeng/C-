#define  _CRT_SECURE_NO_WARNINGS 1

//1 strlen
// size_t strlen(char* str) 
//计算字符串长度的函数，计算“\0”之前的字符个数
//函数返回值为size_t,是无符号的
#include <stdio.h>
#include <string.h>
#include <assert.h>



int my_strlen(const char* str)
{
    //1.计数器的方法
	/*assert(str != NULL);
	int count = 0;
	while (*str !='\0')
	{
		count++;
		str++;
	}
	return count;*/


	//2.递归的方法（也就是不创建临时变量）
	
	if (*str)
		return my_strlen(str + 1) + 1;
	else
		return 0;
}
int main(void)
{
	int len = (int)strlen("ab");
	printf("%d\n", len);//打印的是：6

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", (int)strlen(arr));//打印的是：随机值

	//自己实现strlen函数的3种方法
	//1.计数器的方法
	//2.递归
	//3.指针-指针
	int _len = my_strlen("ab");
	printf("%d\n", _len);
	return 0;
}