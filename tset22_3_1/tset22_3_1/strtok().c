#define  _CRT_SECURE_NO_WARNINGS 1

//char* strtok(char* str,const char* sep) sep������һ���ַ����������������ָ������ַ����ϡ���"@...@";
//��һ������ָ��һ���ַ�������������0�����߶��sep�ַ�����һ�������ָ����ָ��ı��
//strtok()�����ҵ�str����һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�루strtok()������ı䱻�������ַ�������˱��������ַ���һ������ʱ�����ҿ��޸ģ�
//strtok()������һ��������ΪNULL���������ҵ�str�е�һ����ǣ������������ַ����е�λ��
//strtok()������һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��Ǿͷ���NULL
#include <stdio.h>
#include <string.h>


int main(coid)
{
	char arr[] = "github.com/86wangyufeng/C-";
	char* p = "./";

	char but[999] = { 0 };
	strcpy(but, arr);//����arr��but����ȥ

	//�и�but������ַ���
	//����д��
	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);*/

	//����һ���д��
	char* ret = strtok(arr, p);
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	return 0;

}