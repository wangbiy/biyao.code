# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'A'&&ch <= 'M') || (ch >= 'a'&&ch <= 'm'))
			ch += 13;
		else if ((ch >= 'N'&&ch <= 'Z') || (ch >= 'n'&&ch <= 'z'))
			ch -= 13;
		putchar(ch);
	}
	system("pause");
	return 0;
}