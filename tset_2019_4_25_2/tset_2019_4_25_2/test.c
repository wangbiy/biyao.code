# define _CRT_SECURE_NO_WARNINGS 1 
# include <stdio.h>
# include <stdlib.h>
void set()
{
	int n = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d", &n);
	printf("����λΪ:\n");
	for (i = 31; i >= 0; i -= 2)
	{
		tmp = (n >> i) & 1;
		printf("%d", tmp);
	}
	printf("\n");
	printf("ż��λΪ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		tmp = (n >> i) & 1;
		printf("%d", tmp);
	}
}
int main()
{
	set();
	system("pause");
	return 0;
}

