# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("电脑将在2分钟内关机,若输入:你好,则取消关机\n请输入:");
		scanf("%s", &input);
		if (0 == strcmp(input, "你好"))
		{
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}