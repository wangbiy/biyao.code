# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void chart()
{
	int i = 0;
	int j = 0;
	int n = 0;
	printf("«Î ‰»Î–– ˝:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	chart();
	system("pause");
	return 0;
}