# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	float a = 2;
	float b = 1;
	int tmp=0;
	float sum = 0;
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		sum += a / b;
		tmp = a;
		a = a + b;
		b = tmp;
	}
	printf("%f\n", sum);
	system("pause");
	return 0;

}