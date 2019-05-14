#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int ascii_to_integer(char* string)
{
	int result = 0;
	char* p = string;
	while (*p >= '0'&&*p <= '9')
	{
		result *= 10;
		result = result + *p - '0';
		p++;
	}
	if (*p != '\0')
		result = 0;
	return result;
}
int main()
{
	char str[] = "22344";
	printf("%d\n", ascii_to_integer(str));
	system("pause");
	return 0;
}