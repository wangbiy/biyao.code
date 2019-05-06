# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char c;
	int letters = 0;
	int spaces = 0;
	int digits = 0;
	int others = 0;
	printf("请输入一些字母:\n");
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
			letters++;
		else if (c >= '0'&&c <= '9')
			digits++;
		else if (c == ' ')
			spaces++;
		else
			others++;
	}
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);
	system("pause");
	return 0;
}