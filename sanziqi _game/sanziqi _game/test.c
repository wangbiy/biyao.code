# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include "game.h"
void menu()
{
	printf("**********************************\n");
	printf("*****         1.play         *****\n");
	printf("*****         0.exit         *****\n");
	printf("**********************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化
	DisplayBoard(board, ROW, COL);//打印
	while (1)//玩游戏
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')//判断输赢
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你，你赢了!\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了!\n");
	}
	else if (ret == 'Q')
	{
		printf("平局!\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("请选择:");
	scanf("%d", &input);
	do{
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}