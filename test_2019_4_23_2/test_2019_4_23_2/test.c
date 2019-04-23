# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void menu()
{
	printf("*****************************\n");
	printf("*****       1.play      *****\n");
	printf("*****       0.exit      *****\n");
	printf("*****************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入猜的数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了!");
		}
		else if (guess < ret)
		{
			printf("猜小了!");
		}
		else 
		{
			printf("猜对了!");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!");
			break;
		default:
			printf("输入错误，请重新输入!");
			break;
		}
	}
	while (input);
	system("pause");
	return 0;
}