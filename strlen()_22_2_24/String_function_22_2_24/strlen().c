#define  _CRT_SECURE_NO_WARNINGS 1

//1 strlen
// size_t strlen(char* str) 
//�����ַ������ȵĺ��������㡰\0��֮ǰ���ַ�����
//��������ֵΪsize_t,���޷��ŵ�
#include <stdio.h>
#include <string.h>
#include <assert.h>



int my_strlen(const char* str)
{
    //1.�������ķ���
	/*assert(str != NULL);
	int count = 0;
	while (*str !='\0')
	{
		count++;
		str++;
	}
	return count;*/


	//2.�ݹ�ķ�����Ҳ���ǲ�������ʱ������
	
	if (*str)
		return my_strlen(str + 1) + 1;
	else
		return 0;
}
int main(void)
{
	int len = (int)strlen("ab");
	printf("%d\n", len);//��ӡ���ǣ�6

	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", (int)strlen(arr));//��ӡ���ǣ����ֵ

	//�Լ�ʵ��strlen������3�ַ���
	//1.�������ķ���
	//2.�ݹ�
	//3.ָ��-ָ��
	int _len = my_strlen("ab");
	printf("%d\n", _len);
	return 0;
}