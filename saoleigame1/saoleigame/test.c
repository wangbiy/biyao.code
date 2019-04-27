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
	First_SafeMine(mine, show, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("ÕÊ”Œœ∑,«Î—°‘Ò:");
		scanf("%d", &input);
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
