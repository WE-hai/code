#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}