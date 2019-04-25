# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void print()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 31; i >= 0; i--)
	{
		if ((1 << i)&n)
		{
			printf("1");
		}
		else
			printf("0");
	}
}
int main()
{
	print();
	system("pause");
	return 0;
}