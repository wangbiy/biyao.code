# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	float h = 0;
	float s = 0;
	int i = 0;
	h = s = 100;
	h = h / 2;//��һ�η����߶�
	for (i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h /= 2;
	}
	printf("��10�����ʱ��������%f�ף���10�η�����%f��\n", s, h);
	system("pause");
	return 0;
}