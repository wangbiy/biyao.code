# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void bonus(int x)
{
	int s = 0;
	double bonus = 0;
	double bonus1, bonus2, bonus4, bonus6, bonus10;
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	if (x <= 100000)
	{
		s = 1;
	}
	else if (x <= 200000)
	{
		s = 2;
	}
	else if (x <= 400000)
	{
		s = 3;
	}
	else if (x <= 600000)
	{
		s = 4;
	}
	else if (x <= 1000000)
	{
		s = 5;
	}
	else if (x > 1000000)
	{
		s = 6;
	}
	switch (s)
	{
	case 1:
		bonus = x*0.1;
		break;
	case 2:
		bonus = bonus1 + (x - 100000)*0.075;
		break;
	case 3:
		bonus = bonus2 + (x - 200000)*0.05;
		break;
	case 4:
		bonus = bonus4 + (x - 400000)*0.03;
		break;
	case 5:
		bonus = bonus6 + (x - 600000)*0.015;
		break;
	case 6:
		bonus = bonus10 + (x - 1000000)*0.01;
		break;
	}
	printf("提成为:%1f\n", bonus);

}
int main()
{
	int i = 0;
	printf("请输入净利润:");
	scanf("%d", &i);
	bonus(i);
	system("pause");
	return 0;
}