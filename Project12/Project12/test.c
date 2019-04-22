# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void print()
{
	int i = 0;
	int j = 0;
	int maxline = 0;
	scanf("%d", &maxline);
	//上半部分
	for (i = 1; i <= maxline; i++)
	{
		for (j = 1; j <= maxline - i; j++)//空格
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)//*
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 1; i <= maxline; i++)//空格
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (maxline - i) - 1; j++)//*
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	print();
	system("pause");
	return 0;
}