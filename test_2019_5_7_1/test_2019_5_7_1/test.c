# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
char* deblank(char string[])
{
	int i, j = 0;
	char *str = string;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')//判断有多个空格
		{
			*str++ = string[i];
		}
		if ((string[i] == ' ') && !(string[i + 1] == ' '))//判断一个空格
		{
			*str++ = string[i];
		}
	}
	*str = '\0';
	return string;
}
int main()
{
	char* deblank(char string[]);
	char a[100];
	char* p;
	int i, j;
	gets(a);
	p = deblank(a);
	puts(p);
	system("pause");
	return 0;
}