#define  _CRT_SECURE_NO_WARNINGS 1
#include <errno.h>
#include <stdio.h>
#include <string.h>
//char* strerror(int errnum);���ش����룬����Ӧ�Ĵ�����Ϣ
//int main(void)
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", 'r');//��r�����Ƕ�����ļ�����˼
//
//	if (pf == NULL)//�򲻿��ͷ���NULL,���򲻿���ԭ���кܶ࣬����Ȩ�޲�����û������ļ����Է��صĴ����벻ͬ
//	{
//		printf("%s\n", strerror(errno));//errno��һ��ȫ�ֵĴ����������c���Կ⺯�������й����з����˴���ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	}
//	else
//	{
//		printf("�ɹ���\n");
//	}
//	return 0;
//	printf("%s\n", strerror(0));
//}