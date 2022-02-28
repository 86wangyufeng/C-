#define  _CRT_SECURE_NO_WARNINGS 1

//strcat()��������һ���ַ�����׷��һ���ַ���
//char* strcat(char* destination, const char* source);
//Դ�ַ�������һ'\0'����
//Ŀ��ռ�����㹻��
//Ŀ��ռ�������޸�
//�ַ����Լ����Լ�׷�ӣ���Σ������
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//1.�ҵ�Ŀ�ĵ��ַ����ġ�\0��
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
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

	//�Լ�ʵ��
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}