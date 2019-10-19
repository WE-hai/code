#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("*****  1��������Ϸ  *****\n");
	printf("*****  2���˳���Ϸ  *****\n");
	printf("*************************\n");
}
void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}
void Test()
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
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} 
	while (input);
}
int main()
{
	Test();
	return 0;
}