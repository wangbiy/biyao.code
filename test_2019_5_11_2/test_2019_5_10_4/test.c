#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 4, 5, 8, 9, 2, 4, 1, 5, 8, 9};
	int t = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz;  i++)
	{
		t = t^arr[i];
	}
	printf("%d\n", t);
	system("pause");
	return 0;
}