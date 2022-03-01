#define  _CRT_SECURE_NO_WARNINGS 1
//接前一天
//三步反转法

#include <stdio.h>
#include <assert.h>
#include <string.h>


void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = (int)strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main(void)
{
	char arr[] = "abcdef";
	left_move(arr,2);
	printf("%s\n", arr);
	return 0;
}