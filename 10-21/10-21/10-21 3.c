#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char grade; 
	printf("������ɼ��ֶΣ�");
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A':
		printf("�������䣺90����100\n");
		break;
	case 'B':
		printf("�������䣺80����89\n");
		break;
	case 'C':
		printf("�������䣺70����79\n");
		break;
	case 'D':
		printf("�������䣺60����69\n");
		break;
	case 'E':
		printf("�������䣺< 60��������\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}