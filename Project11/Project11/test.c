# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int count()
{
	int n = 0;
	int count = 0;
	for (n = 0; n <= 100; n++)
	{
		if ((n % 10 == 9) || (n / 10 == 9))
			count++;
	}
	printf("%d\n", count);
}
int main()
{
	count();
	system("pause");
	return 0;
}