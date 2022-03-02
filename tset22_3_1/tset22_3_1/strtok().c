#define  _CRT_SECURE_NO_WARNINGS 1

//char* strtok(char* str,const char* sep) sep参数是一个字符串，定义了用作分隔符的字符集合。如"@...@";
//第一个参数指定一个字符串，他包含了0个或者多个sep字符串中一个或多个分隔符分隔的标记
//strtok()函数找到str中下一个标记，并将其用\0结尾，返回一个指向这个标记的指针（strtok()函数会改变被操作的字符串，因此被操作的字符串一般是临时拷贝且可修改）
//strtok()函数第一个参数不为NULL，函数将找到str中第一个标记，并保存他在字符串中的位置
//strtok()函数第一个函数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，那就返回NULL
#include <stdio.h>
#include <string.h>


int main(coid)
{
	char arr[] = "github.com/86wangyufeng/C-";
	char* p = "./";

	char but[999] = { 0 };
	strcpy(but, arr);//拷贝arr到but里面去

	//切割but里面的字符串
	//垃圾写法
	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);*/

	//高明一点的写法
	char* ret = strtok(arr, p);
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;

}