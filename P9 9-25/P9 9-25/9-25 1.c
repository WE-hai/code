#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("****************************\n");
	printf("*****      1. play     *****\n");
	printf("*****      0. exit     *****\n");
	printf("****************************\n");
}
#include <stdlib.h>
#include <time.h>
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else if(guess > ret)
		{
			printf("�´��ˣ�\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}