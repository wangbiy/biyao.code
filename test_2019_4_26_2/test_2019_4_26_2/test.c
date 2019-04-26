# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void Muder()
{
	int muder = 0;
	for (muder = 'A'; muder <= 'D'; muder++)
	{
		if (3 == (muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D'))
		{
			printf("muder=%c\n", muder);
		}
	}
}
int main()
{
	Muder();
	system("pause");
	return 0;
}