# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("���Խ���2�����ڹػ�,������:���,��ȡ���ػ�\n������:");
		scanf("%s", &input);
		if (0 == strcmp(input, "���"))
		{
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}