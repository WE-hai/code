#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("*****  1��������Ϸ  *****\n");
	printf("*****  0���˳���Ϸ  *****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������Ҫ�µ����֣�");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С�ˣ����ٲ�һ��!\n");
		}
		else if (ret < guess)
		{
			printf("�´��ˣ����ٲ�һ��!\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
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
		printf("��ѡ��0/1\t");
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
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}