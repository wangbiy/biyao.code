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
	m = a^b;//�����ͬΪ0����ͬΪ1
	while (m)//����1�ĸ���
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