#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
	{
			int year = 0;
			int i = 0;
			for (year = 1000; year <= 2000; year++)
			{
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				{
					printf("%7d", year);
					i++;
					if (i % 10 == 0)
					{
						printf("\n");
					}
				}
			}
			return 0;
		}

