# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int arr[] = { 1, 2, 4, 18, 9, 10, 24, 35, 7, 19 };
	int i = 0;
	int j = 0;
	int tmp = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j + 1]<arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}