# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入一个数:");
	scanf("%d", &a);
	b = ~a;
	//a:00000000000000000000000000000001
	//b:11111111111111111111111111111110(补码）
	//  10000000000000000000000000000001(反码）
	//  10000000000000000000000000000010(原码-2）
	printf("a的按位取反值为:%d\n", b);
	system("pause");
	return 0;
}