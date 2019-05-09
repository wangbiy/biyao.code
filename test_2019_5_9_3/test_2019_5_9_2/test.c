# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>//有n个整数，让前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
void reverse(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	while (i < j)
	{
		if (i < j)
		{
			int tmp = 0;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		i++;
		j--;
	}
}
int main()
{
	int n = 0;
	int m = 0;
	int arr[100];
	int i = 0;
	printf("需要输入几个数？\n");
	scanf("%d", &n);
	printf("请输入%d个数:", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("请输入移动多少位:\n");
	scanf("%d", &m);
	reverse(arr, 0, n - 1);
	reverse(arr, 0, m - 1);
	reverse(arr, m, n - 1);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}