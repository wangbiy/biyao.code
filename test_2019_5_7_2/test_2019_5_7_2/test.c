# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int n = 0;
	int k = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	int a[256];
	for (i = 2; i <= 1000; i++)
	{
		sum = a[0] = 1;
		k = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				sum += j;
				a[++k] = j;
			}
		}
		if (sum == i)
		{
			printf("%d=%d", i, a[0]);
			for (n = 1; n <= k; n++)
				printf("+%d", a[n]);
			printf("\n");
		}
	}
		system("pause");
		return 0;
}