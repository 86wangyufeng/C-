#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main(void)
{
	//5.�������������Լ����


	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	//5.1 �������������ĸ��������
	//int count = 0;
	//for (; (a % 2 == 0) && (b % 2 == 0);)//�ж��Ƿ�Ϊż�����Ǿ���Լ��
	//{
	//	count++;//���������˶��ٸ�2
	//	a = a / 2;
	//	b = b / 2;
	//}
	//while (a != b)
	//{
	//	if (a > b)
	//		a = a - b;
	//	else
	//		b = b - a;
	//}

	//printf("%d\n",(int)pow(2,count)* a);


	//5.2շת�����

	/*if (a >= b)
	{
		start:
		while (a % b != 0)
		{
			b = a % b;
			a = b;
		}
	}
	else
	{
		int c = 0;
		c = a;
		a = b;
		b = c;
		goto start;
	}*/
	/*printf("%d\n", b);*/

	//5.3��ٷ�

	int c = (a < b) ? a : b;
	while (!((a % c == 0) && (b % c == 0)))
	{
		c--;
	}
	printf("%d\n", c);
	return 0;
}