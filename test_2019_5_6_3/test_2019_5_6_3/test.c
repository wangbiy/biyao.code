# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
float app_number(float value)//Çó½üËÆÊý
{
	float p = 1;
	float n = 0;
	while (1)
	{
		n = (p + (value / p)) / 2;
		if (p != n)
			p = n;
		else
			break;
	}
	return n;

}

int main()
{
	float value;
	scanf("%f", &value);
	if (value < 0)
	{
		printf("´íÎó!");
		return 1;
	}
	else
		printf("%f\n", app_number(value));
	system("pause");
	return 0;
}