# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int fab1(int a)//递归
{
	if (a <= 2)
	{
		return 1;
	}
	else
		return fab1(a - 1) + fab1(a - 2);
}
int fab2(int m)//非递归
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (m <= 2)
		return 1;
	else
	{
		while (m > 2)
		{
			c = a + b;
			a = b;
			b = c;
			m--;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入:");
	scanf("%d", &n);
	ret = fab1(n);
	printf("第%d个斐波那契数为%d\n", n, ret);
	ret = fab2(n);
	printf("第%d个斐波那契数为%d\n", n, ret);
	system("pause");
	return 0;
}