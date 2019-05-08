# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	unsigned int a, b, c, d;
	printf("ÇëÊäÈëÕûÊý:");
	scanf("%o", &a);
	b = a >> 4;
	c = ~(~0 << 4);
	d = b&c;
	printf("%o %o\n", a, d);
	system("pause");
	return 0;
}