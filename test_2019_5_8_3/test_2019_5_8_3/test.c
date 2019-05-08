# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[20] = { 1, 4, 6, 9, 13, 16, 19, 28, 40, 100 };
	int a = 0;
	printf("原始数组为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("插入一个数:\n");
	scanf("%d", &a);
	for (j = 9; j >= 0; j--)
	{
		if (a < arr[j])
		{
			arr[j + 1] = arr[j];
		}
		else
		{
			arr[j + 1] = a;
			break;
		}
		if (j == 0)
			arr[0] = a;
	}
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}