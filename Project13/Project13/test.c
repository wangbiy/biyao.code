# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
void nPowerNumber()
{
	int n = 0;
	int m = 0;
	int i = 0;
	scanf("%d %d", &n,&m);
	for (i = n; i<m; i++)
	{
		int tmp = i;
		int sum = 0;
		int count = 0;
		while (tmp)//计算count
		{
			tmp=tmp / 10;
			count++;
		}
		tmp = i;
		while (tmp)//实现水仙花数
		{
			int num = tmp % 10;
			sum += pow(num, count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}
int main()
{
	nPowerNumber();
	system("pause");
	return 0;
}