# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void primary()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int count = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				count++;
		}
		if (count == 0)
			printf("%d\n", i);
	}
}
int main()
{
	primary();
	system("pause");
	return 0;
}
