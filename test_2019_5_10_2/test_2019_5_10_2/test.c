# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <Windows.h>
# include <math.h>
int reverse_bit(int num)
{
	int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		ret += (num & 1)*pow(2, 31 - i);
		num >>= 1;
	}
	return ret;
}
int main()
{
	int a = 25;
	int ret = reverse_bit(a);
	printf("ret=%u\n", ret);
	system("pause");
	return 0;
}