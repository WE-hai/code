#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	printf("���������룺\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "12345678") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	if (i == 3)
		{
			printf("��½ʧ�ܣ�\n");
		}
	return 0;
}