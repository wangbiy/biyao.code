# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int DigitSum(int n)
{
	int ret = 0;
	int sum = 0;

	if (n > 0)
	{
		ret = n % 10;
		n = n / 10;
		sum = ret + DigitSum(n);
	}
	return sum;
}
int main()
{
	int n = 0;
	int tmp = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	tmp = DigitSum(n);
	printf("结果为%d\n", tmp);
	system("pause");
	return 0;
}