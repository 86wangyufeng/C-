#define  _CRT_SECURE_NO_WARNINGS 1

//int strcmp(const char* str1,const char* str2) �ַ����ȽϺ���
//��׼����һ���ַ������ڵڶ����ͷ��ش���0������
      //��һ���ַ������ڵڶ����ַ����ͷ���0
      //��һ���ַ���С�ڵڶ����ַ����ͷ���һ��С��0������
//windows11������vs2022�������Ƿ���1��0��-1
//liux����gcc�������Ƿ��ش���0��0��С��0

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);//���ԣ������ǿ�ָ��
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
//	int ret = strcmp(p1, p2);//�Ƚ������ַ�����Ӧ��ĸ��ASCII��ֵ��С���ȴӵ�һ����ĸ��ʼ�ȣ���Ⱦͱ���һ��
//	printf("ret = %d\n", ret);
//
//	//strcmp()������ʵ��
//	int rets = my_strcmp(p1, p2);
//	printf("rets = %d\n", rets);
//	return 0;
//}



