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
		printf("����������:");
		scanf("%s", &input);
		if ((strcmp(input,arr)) == 0)
		{
			printf("��½�ɹ�!");
			break;
		}
		else
		{
			printf("�����������������!");
		}
		if (3 == i)
			printf("�˳���¼!");
	}
	system("pause");
	return 0;

}