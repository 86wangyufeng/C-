#define  _CRT_SECURE_NO_WARNINGS 1

//char* strstr(const char*, const char*);查找子字符串的意思
//在第一个字符串里面查找第二个字符串，如果有就返回第二个字符串的第一个元素在第一个字符串中的地址，如果没有就返回NULL
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* p3,const char* p4)
{
	assert((p3 && p4) != NULL);//断言，以防p1和p2是NULL
	const char* s3 = NULL;
	const char* s4 = NULL;
	const char* cur = p3;
	if (*p4 == '\0')
		return (char*)p3;
	while (*cur)
	{
		s3 = cur;//记录第一个字符串和第二个字符串比较开始时候的地址，以免差一点匹配想返回开始时候地址的下一个而找不到地址
		s4 = p4;//找到最开始第二个字符串的地址，重新开始比对，以免差一点匹配成功，而在下次在对比时候不是从首个字符开始对比的

		while ((*s3 != '\0') && (*s4 != '\0') && (*s3 == *s4))
		{
			s3++;
			s4++;
		}
		if (*s4 == '\0')
			return (char*)cur;//找到了
		if (*s3 == '\0')
			return NULL;//这是如果第一个字符串长度比第二个字符串小时，提前结束循环
		cur++;
	}
	return NULL;//找不到字串
}
int main(void)
{
	const char *p1 = "abcdef";
	const char *p2 = "def";
	const char* ret = strstr(p1, p2);
	if (ret == NULL)
		printf("子字符串不存在\n");
	else
		printf("%s\n", ret);
	//自己实现srstr()函数
	const char* p3 = "abbbcdef";
	const char* p4 = "bbc";
	char* rets = my_strstr(p3, p4);
	if (rets == NULL)
		printf("找不到字串\n");
	else
		printf("%s\n", rets);
	return 0;
}