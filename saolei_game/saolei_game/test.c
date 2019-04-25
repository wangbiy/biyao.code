# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include "game.h"
void menu()
{
	printf("******************************\n");
	printf("*****       1.play       *****\n");
	printf("*****       0.exit       *****\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏!");
			break;
		default:
			printf("输入错误，请重新输入!");
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