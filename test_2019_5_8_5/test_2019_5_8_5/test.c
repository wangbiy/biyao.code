//宏的命令(3种)
# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
//# define TRUE 1
//# define FALSE 0
//# define SQ(x) (x)*(x)
# define exchange(a,b) {int t;t=a;a=b;b=t;}//注意放在一行
# define LAG >
# define SMA <
# define EQ ==
int main()
{
	/*int num = 0;
	int again = 1;
	printf("如果值小于50程序将停止\n");
	while (again)
	{
		printf("请输入数字:");
		scanf("%d", &num);
		printf("平方为:%d\n", SQ(num));
		if (num >= 50)
			again = TRUE;
		else
			again = FALSE;
	}*/
	/*int x = 20;
	int y = 10;
	printf("%d,%d\n", x, y);
	exchange(x, y);
	printf("%d,%d\n", x, y);*/
	int i, j;
	printf("请输入两个数字:\n");
	scanf("%d%d", &i, &j);
	if (i LAG j)
		printf("%d 大于 %d\n", i, j);
	if (i EQ j)
		printf("%d 等于 %d\n", i, j);
	if (i SMA j)
		printf("%d 小于 %d\n", i, j);
	system("pause");
	return 0;
}