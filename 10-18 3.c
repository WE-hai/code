#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for(i=1; i<=1000000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. ��i��λ��-n
		int sum = 0;
		int n = 0;
		int tmp = i;
		while(tmp)
		{
			n++;
			tmp/=10;
		}
		//2. ����i��ÿһλ��n�η�֮��
		tmp = i;
		while(tmp)
		{
			sum += (int)pow(tmp%10, n);
			tmp/=10;
		}
		//3. �Ƚ�
		if(sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}