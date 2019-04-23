# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# define N 10
void InitArr(int arr[], int sz, int value)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = value;
	}
}
void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void swap(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		swap(&arr[i], &arr[sz - i - 1]);
	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void InputArr(int arr[], int sz)
{
	int i = 0;
	printf("ÇëÊäÈë%d¸öÊý\n", sz);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main()
{
	int arr[N];
	InputArr(arr, N);
	PrintArr(arr, N);
	reverse(arr,N);
	PrintArr(arr,N);
	InitArr(arr,N,200);
	PrintArr(arr, N);
	empty(arr,N);
	PrintArr(arr, N);
	system("pause");
	return 0;
}
