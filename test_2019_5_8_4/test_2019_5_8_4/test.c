# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()//auto�������
{
	int i = 0;
	int num = 0;
	num = 2;
	for (i = 0; i < 3; i++)
	{
		printf("numΪ:%d\n", num);
		num++;
		{
			auto int num = 1;
			printf("����ģ��num����Ϊ%d\n", num);
			num++;
		}
	}
	system("pause");
	return 0;
}