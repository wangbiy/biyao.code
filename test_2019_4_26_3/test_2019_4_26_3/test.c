# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[100][100] = { 0 };
	while (n<1 || n>100)
	{
		printf("请输入要打印的杨辉三角行数:");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < n;i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);	
		}
		printf("\n");
	}
	system("pause");
	return 0;
}