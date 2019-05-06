# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	int flag = 0;
	char previous[128];
	char next[128];
	gets(previous);
	while (gets(next) != EOF)
	{
		if (strcmp(next, previous) != 0 && flag == 1)
		{
			printf("%s", next);
			flag = 0;
		}
		if (strcmp(next, previous) == 0)
		{
			flag = 1;
		}
		else
			flag = 0;
		strcpy(previous, next);
	}
	system("pause");
	return 0;
}