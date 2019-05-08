# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void sortarc1(int* arr,int n)//10个数升序
{
	int i = 0;
	int j = 0;
	int min = 0;
	for (i = 0; i < 10; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[i], &arr[min]);
		}
	}
}
void sortarc2(int* arr, int n)//10个数降序
{
	int i = 0;
	int j = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		max = i;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j]>arr[max])
			{
				max = j;
			}
		}
		if (max != i)
		{
			swap(&arr[i], &arr[max]);
		}
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 1, 5, 2, 4, 7, 10, 9, 0,24,76 };
	sortarc1(arr,10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	sortarc2(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}