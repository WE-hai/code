#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("*****  1��������Ϸ  *****\n");
	printf("*****  0���˳���Ϸ  *****\n");
	printf("*************************\n");
}
void game()
{
	int num = 0;
	int guess = 0;
	num = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < num)
		{
			printf("��С��\n");
		}
		else if (guess>num)
		{
			printf("�´���\n");
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
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��0 or 1\t");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��\n");
		}
	} while (input);
	return 0;
}