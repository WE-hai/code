#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, i = 0;
	printf("������һ��������");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	if (n%i == 0)
		break;
		if (i < n)
			printf("%d����һ������\n", n);
		else printf("%d��һ������\n", n);
	return 0;
}