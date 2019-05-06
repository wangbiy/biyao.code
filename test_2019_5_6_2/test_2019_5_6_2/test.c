# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	printf("«Î ‰»În:");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1)
				printf("*");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}