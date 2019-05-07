# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void reverse_str(char* str)
{
	int len = 0;
	char tmp = 0;
	char* left;
	char* right;
	len = strlen(str);
	left = str;
	right = str + len - 1;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char string[] = "www.runbob.com";
	reverse_str(&string);
	printf("%s\n",string);
	system("pause");
	return 0;
}