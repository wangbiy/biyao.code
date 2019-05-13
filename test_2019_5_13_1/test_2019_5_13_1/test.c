# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
char *match(char* str, char* want)
{
	while (*want != '\0')
		if (*str++ != *want++)
			return NULL;
	return str;
}
int del_substr(char* str, char const *substr)
{
	char* next = 0;
	while (*str != '\0')
	{
		next = match(str, substr);
		if (next != '\0')
			break;
		str++;
	}
	if (*str == '\0')
		return 0;
	while (*str++ = *next++)
		;
	return 1;
}
int main()
{
	char string1[] = "ABCDEFGH";
	char string2[] = "CDE";
	del_substr(string1, string2);
	printf("%s\n",string1);
	system("pause");
	return 0;
}