# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	char ch = 0;
	int i = 0;
	int j = 0;
	char s[] = "Hello";
	printf("ÇëÊäÈëÒªÉ¾³ýµÄ×Ö·û:");
	scanf("%c", &ch);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ch)
		{
			for (j = i; s[j] != '\0'; j++)
			{
				s[j] = s[j + 1];
			}
			s[j] = '\0';
		}
	}
	printf("%s\n", s);
	system("pause");
	return 0;
}