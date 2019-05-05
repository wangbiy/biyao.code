# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int rabbit(int n)
{
	if (1 == n || 2 == n)
		return 1;
	else if (n >= 3)
		return rabbit(n - 1) + rabbit(n - 2);
	else
		return -1;
}
int main()
{
	int i = 0;
	int sum = 0;
	int arr[13];
	for (i = 1; i <= 12; i++)
	{
		arr[i] = rabbit(i + 1);
		printf("%4d\n", arr[i]);
	}
	sum = arr[12];
	printf("一年后的兔子对数:%d\n", sum);
	system("pause");
	return 0;
}