# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	float h = 0;
	float s = 0;
	int i = 0;
	h = s = 100;
	h = h / 2;//第一次反弹高度
	for (i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h /= 2;
	}
	printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
	system("pause");
	return 0;
}