# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void sum()
{
	int a = 0;
	int sum = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
}
int main()
{
	sum();
	system("pause");
	return 0;
}