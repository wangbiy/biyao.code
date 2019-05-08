# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3];
	int sum = 0;
	printf("请输入3*3矩阵:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum += arr[i][i];
	}
	printf("对角线之和为:%d\n", sum);
	system("pause");
	return 0;
}