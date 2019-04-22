# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void gongyueshu()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (a%b != 0)
	{
		tmp = a%b;
		a = b;
		b = tmp;
	}
	printf("最大公约数为:%d\n", b);
}
int main()
{
	gongyueshu();
	system("pause");
	return 0;
}