# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	char a, b, c;
	for (a = 'x'; a <= 'z'; a++)
	{
		for (b = 'x'; b <= 'z'; b++)
		{
			if (a != b)
			{
				for (c = 'x'; c <= 'z'; c++)
				{
					if (a != c&&b != c)
					{
						if (a != 'x'&&c != 'x'&&c != 'z')
						{
							printf("Ë³ÐòÎª:a--%c,b--%c,c--%c\n", a, b, c);
						}

					}
				}
			}
		}
	}
	system("pause");
	return 0;
}