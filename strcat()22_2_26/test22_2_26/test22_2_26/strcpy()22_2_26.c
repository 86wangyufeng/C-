#define  _CRT_SECURE_NO_WARNINGS 1

//char* strcpy(char* destination, const chaar* source) �ַ�����������
//Դ�ַ��������С�\0��
//����Ҫ��'\0'������Ŀ�ĵؿռ���
//Ŀ��ռ��㹻��ȷ���ܷ���Դ�ַ���
//ѧ��ģ��ʵ��
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;

	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ�ĵؿռ䶼��ʼλ��
	return ret;
}
int main(void)
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	//�Լ�ʵ��strcpy()����
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}