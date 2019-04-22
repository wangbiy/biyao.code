# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
double result()
{
	int i = 0;
	int flag = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%f",sum);
}
int main()
{
	result();
	system("pause");
	return 0;
}