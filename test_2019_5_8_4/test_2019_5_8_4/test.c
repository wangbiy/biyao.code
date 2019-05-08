# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()//auto定义变量
{
	int i = 0;
	int num = 0;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("num为:%d\n", num);
		num++;
		{
			auto int num = 1;
			printf("内置模块num变量为%d\n", num);
			num++;
		}
	}
	system("pause");
	return 0;
}