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
	printf("������һЩ��ĸ:\n");
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
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letters, digits, spaces, others);
	system("pause");
	return 0;
}