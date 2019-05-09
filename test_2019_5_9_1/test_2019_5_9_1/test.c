# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>//输入数组，最大的与第一个元素交换，最小的与最后一个交换
void swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void compare(int arr[], int m)
{
	int i = 0;
	for (i = 0; i < m; i++)
	{
		if (arr[i]>arr[0])
			swap(&arr[i], &arr[0]);
	}
	for (i = 0; i < m; i++)
	{
		if (arr[i] < arr[m - 1])
			swap(&arr[i], &arr[m - 1]);
	}
}
int main()
{
	int m = 0;
	int arr[10];
	printf("请输入10个整数:\n");
	for (m = 0; m < 10; m++)
	{
		scanf("%d", &arr[m]);
	}
	compare(arr, 10);
	for (m = 0; m < 10; m++)
	{
		printf("%d ", arr[m]);
	}
	printf("\n");
	system("pause");
	return 0;
}