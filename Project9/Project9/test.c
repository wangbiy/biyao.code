# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void swap()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int tmp = 0;
	int i = 0;
	printf("交换前的数组arr1为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("交换前的数组arr2为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("交换后的数组arr1为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("交换后的数组arr2为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr2[i]);
	}
}
int main()
{
    swap();
	system("pause");
	return 0;
}