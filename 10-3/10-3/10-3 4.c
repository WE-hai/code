#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[],int sz)
{
	int i = 0;
	printf("���������飺");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < (sz/2); i++)
	{
		arr[i]=arr[10-i-1];
	}
}
int main()
{
	int i = 0; 
	int sz = 0;
	int arr[10]={0};
	sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	printf("��ʼ����");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	empty(arr, sz);
	printf("��գ�");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	reverse(arr, sz);	
	printf("���ã�");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}