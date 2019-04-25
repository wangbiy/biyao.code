# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value&=(value - 1);
		count++;
	}
	printf("%u\n", count);
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	count_one_bits(n);
	system("pause");
	return 0;
}
