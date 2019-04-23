# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int i = 0;
	while ((i = getchar()) != EOF)
	{
		if (i >= 'a'&&i <= 'z')
		{
			putchar(i - 32);
		}
		else if (i >= 'A'&&i <= 'Z')
		{
			putchar(i + 32);
		}
		else if (i >= '0'&&i <= '9')
		{
			;
		}
	}
	system("pause");
	return 0;
}