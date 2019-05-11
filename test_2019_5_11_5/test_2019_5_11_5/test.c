//ºÚµ•—°‘Ò≈≈–Ú
# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void simplesort(int a[], int sz)
{
	int i = 0;
	int j = 0;
	int min = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		min = i;
		for (j = i + 1; j < sz; j++)
		{
			if (a[min]>a[j])
				min = j;
		}
		if (i != min)
		{
		    tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
}
void print(int a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[] = { 12, 24, 15, 2, 3, 7, 10 };
	int sz = sizeof(a) / sizeof(a[0]);
	simplesort(a, sz);
	print(a, sz);
	system("pause");
	return 0;
}