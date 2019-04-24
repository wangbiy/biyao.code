# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void reverse_string(char* string)
{
	if (*string == '\0')
	{
		printf("%c", *string);
	}
	else
	{
		reverse_string(string + 1);
		printf("%c", *string);
	}
}
int main()
{
	char s[] = "acvbdfg";
	reverse_string(&s);
	system("pause");
	return 0;
}