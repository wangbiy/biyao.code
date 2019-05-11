//÷±Ω”≤Â»Î≈≈–Ú
# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void insert_sort(int* a, int n)
{
	for (int i = 0; i<n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0 && a[end] > tmp)
		{
			a[end + 1] = a[end];
			--end;
		}
		a[end + 1] = tmp;
	}
}
void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[] = { 5, 2, 4, 7, 8, 6, 9, 10, 1, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	insert_sort(a, n);
	print(a, n);
	system("pause");
	return 0;
}
