#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
}
	return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = prime(n);
	if (ret == 0)
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	return 0;
}