#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	if (c >= 'A'&&c<='Z')
	{
		c = c + 32;
		printf("%c\n", c);
	}
	else if (c>='a'&&c<='z')
	{
		c = c - 32;
		printf("%c\n", c);
	}
	return 0;
}