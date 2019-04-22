# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void swap1()
{
	int a = 20;
	int b = 10;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
}
void swap2()
{
	int a = 20;
	int b = 10;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d", a, b);
}
int main()
{
	swap1();
	swap2();
	system("pause");
	return 0;
}