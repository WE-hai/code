#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d��������\n");
	}
	return 0;
}