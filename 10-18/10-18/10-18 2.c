#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	printf("������һ������");
	scanf("%d", &line);//7
	//�ϲ���
	for(i=0; i<line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0; 
		for(j=0; j<line-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�²���
	for(i=0; i<line-1; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for(j=0; j<i+1; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for(j=0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
