# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void swap()
{
	int a = 20;
	int b = 10;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d\n", a, b);
}
int main()
{
	swap();
	system("pause");
	return 0;
}