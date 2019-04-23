# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	char arr[] = "248703542";
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", &input);
		if (0 == strcmp(input, arr))
		{
			printf("µÇÂ½³É¹¦!");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë!");
		}
		if (3 == i)
		{
			printf("µÇÂ¼Ê§°Ü!");
		}
	}
	system("pause");
	return 0;
}