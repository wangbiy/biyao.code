#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int hermite(int n, int x)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x*hermite(n - 1, x) - 2 * (n - 1)*hermite(n - 2, x);
}
int main()
{
	int n = 0;
	int x = 0;
	printf("ÇëÊäÈëx,n:");
	scanf("%d%d", &x, &n);
	int ret = hermite(n, x);
	printf("%d\n", ret);
	system("pause");
	return 0;
}