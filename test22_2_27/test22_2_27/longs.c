#define  _CRT_SECURE_NO_WARNINGS 1

//���Ȳ������Ƶ��ַ�������
//strcpy() �ַ�����������
//strcat() �ַ������亯��
//strcmp() �ַ����ȽϺ���
//��Щʱ�򲻰�ȫ����Щ���������ǿռ��С��ǿ������


//���������Ƶĺ�����strncpy(),strncat(),strncmp()
//����ڳ��Ȳ������Ƶĺ���������һ����������ȷ�����ȵĲ���
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
//	strncpy(arr3, arr4, 5);//û��6���ֽڵĲ�0
//	printf("%s\n", arr3);
//	return 0;
//}

//strncat()�����������3���ַ�������Լ���׷��һ��\0

int main(void)
{
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret = strncmp(p1, p2, 3);//��ӡ����0
	printf("%d\n", ret);
	return 0;
}

