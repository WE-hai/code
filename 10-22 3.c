#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	printf("������һ������");
	scanf("%d", &i);
	while (i<=10)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}