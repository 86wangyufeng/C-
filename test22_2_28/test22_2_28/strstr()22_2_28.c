#define  _CRT_SECURE_NO_WARNINGS 1

//char* strstr(const char*, const char*);�������ַ�������˼
//�ڵ�һ���ַ���������ҵڶ����ַ���������оͷ��صڶ����ַ����ĵ�һ��Ԫ���ڵ�һ���ַ����еĵ�ַ�����û�оͷ���NULL
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* p3,const char* p4)
{
	assert((p3 && p4) != NULL);//���ԣ��Է�p1��p2��NULL
	const char* s3 = NULL;
	const char* s4 = NULL;
	const char* cur = p3;
	if (*p4 == '\0')
		return (char*)p3;
	while (*cur)
	{
		s3 = cur;//��¼��һ���ַ����͵ڶ����ַ����ȽϿ�ʼʱ��ĵ�ַ�������һ��ƥ���뷵�ؿ�ʼʱ���ַ����һ�����Ҳ�����ַ
		s4 = p4;//�ҵ��ʼ�ڶ����ַ����ĵ�ַ�����¿�ʼ�ȶԣ������һ��ƥ��ɹ��������´��ڶԱ�ʱ���Ǵ��׸��ַ���ʼ�Աȵ�

		while ((*s3 != '\0') && (*s4 != '\0') && (*s3 == *s4))
		{
			s3++;
			s4++;
		}
		if (*s4 == '\0')
			return (char*)cur;//�ҵ���
		if (*s3 == '\0')
			return NULL;//���������һ���ַ������ȱȵڶ����ַ���Сʱ����ǰ����ѭ��
		cur++;
	}
	return NULL;//�Ҳ����ִ�
}
int main(void)
{
	const char *p1 = "abcdef";
	const char *p2 = "def";
	const char* ret = strstr(p1, p2);
	if (ret == NULL)
		printf("���ַ���������\n");
	else
		printf("%s\n", ret);
	//�Լ�ʵ��srstr()����
	const char* p3 = "abbbcdef";
	const char* p4 = "bbc";
	char* rets = my_strstr(p3, p4);
	if (rets == NULL)
		printf("�Ҳ����ִ�\n");
	else
		printf("%s\n", rets);
	return 0;
}