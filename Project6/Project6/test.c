# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void best()
{
	int arr[10];
	int max = 0;
	int a = 0;
	int b = 0;
	printf("ÇëÊäÈë10¸öÊı:");
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &arr[a]);
	}
    max=arr[0];
	for (b = 1; b < 10; b++)
	{
		if (max < arr[b])
			max = arr[b];
	}
	printf("%d\n", max);
}
int main()
{
	best();
	system("pause");
	return 0;
}