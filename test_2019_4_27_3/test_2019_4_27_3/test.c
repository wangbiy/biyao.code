# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 2, 3, 4, 5, 6 };
	int arr3[5] = { 3, 4, 5, 6, 7 };
	int *arr[3] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);//--printf("%d ", *(arr[i] + j));
		}
	}
	system("pause");
	return 0;
}
