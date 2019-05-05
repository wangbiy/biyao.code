# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;
	int leap;
	printf("请输入年月日:");
	scanf("%d %d %d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 59;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:
		sum = 181;
		break;
	case 8:
		sum = 212;
		break;
	case 9:
		sum = 243;
		break;
	case 10:
		sum = 273;
		break;
	case 11:
		sum = 304;
		break;
	case 12:
		sum = 334;
		break;
	default:
		break;
	}
	sum += day;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		leap = 1;
	}
	else
	{
		leap = 0;
	}
	if (leap == 1 && month > 2)
	{
		sum++;
	}
	printf("这是这一年的第%d天\n", sum);
	system("pause");
	return 0;
}