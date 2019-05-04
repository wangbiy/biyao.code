# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int  main()
{
	char input[10] = {0};
	char arr[] = "134567";
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", &input);
		if ((strcmp(input,arr)) == 0)
		{
			printf("µÇÂ½³É¹¦!");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë!");
		}
		if (3 == i)
			printf("ÍË³öµÇÂ¼!");
	}
	system("pause");
	return 0;

}