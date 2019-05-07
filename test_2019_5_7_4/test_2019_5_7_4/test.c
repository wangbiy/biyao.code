# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int x1 = 0;
	int x2 = 1;
	int day = 9;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;
		x2 = x1;
		day--;
	}
	printf("змЪ§ЮЊ:%d\n", x1);
	system("pause");
	return 0;
}