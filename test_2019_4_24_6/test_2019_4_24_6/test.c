# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int factorial1(int n)//递归
{
	if (n == 1)
	{
		return 1;
	}
	else
		return n * factorial1(n - 1);
}
int factorial2(int n)//非递归
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	printf("请输入:");
	scanf("%d", &n);
	int ret=factorial1(n);
	printf("结果为%d\n", ret);
	int tmp = factorial2(n);
	printf("结果为%d\n", tmp);
	system("pause");
	return 0;
}