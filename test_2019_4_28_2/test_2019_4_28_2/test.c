# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int transform1(int n)
{
	if (n < 10)
	{
		printf("%c", n + '0');
	}
	else if (n >= 10 && n < 16)
	{
		printf("%c", n + 'A' - 10);
	}
}
int transform2(int n)
{
	if (n >=16)
	{
		transform2(n / 16);
	}
	transform1(n % 16);
}
int main()
{
	int n = 0;
	printf("请输入一个十进制数:");
	scanf("%d", &n);
	transform2(n);
	system("pause");
	return 0;
}