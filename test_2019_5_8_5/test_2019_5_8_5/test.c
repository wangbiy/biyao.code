//�������(3��)
# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
//# define TRUE 1
//# define FALSE 0
//# define SQ(x) (x)*(x)
# define exchange(a,b) {int t;t=a;a=b;b=t;}//ע�����һ��
# define LAG >
# define SMA <
# define EQ ==
int main()
{
	/*int num = 0;
	int again = 1;
	printf("���ֵС��50����ֹͣ\n");
	while (again)
	{
		printf("����������:");
		scanf("%d", &num);
		printf("ƽ��Ϊ:%d\n", SQ(num));
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
	printf("��������������:\n");
	scanf("%d%d", &i, &j);
	if (i LAG j)
		printf("%d ���� %d\n", i, j);
	if (i EQ j)
		printf("%d ���� %d\n", i, j);
	if (i SMA j)
		printf("%d С�� %d\n", i, j);
	system("pause");
	return 0;
}