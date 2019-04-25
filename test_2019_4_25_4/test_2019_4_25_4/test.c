# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void different()
{
	int a = 0;
	int b = 0;
	int m = 0;
	int count = 0;
	scanf("%d%d", &a, &b);
	m = a^b;//异或，相同为0，不同为1
	while (m)//计算1的个数
	{
		m&=(m - 1);
		count++;
	}
	printf("%d\n", count);
}
int main()
{
	different();
	system("pause");
	return 0;
}