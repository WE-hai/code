#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*********************\n");
	printf("*****  1��play  *****\n");
	printf("*****  0��exit  *****\n");
	printf("*********************\n");
}
void game()
{
	int n = 0;
	int guess = 0;
	n = rand() % 100 + 1;
	while (1)
	{
		printf("�������������֣�");
		scanf("%d", &guess);
		if (guess > n)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess<n)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int i = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��0��1\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (i);
	return 0;
}