# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
		return n*pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("��ֱ�����n��k:");
	scanf("%d%d", &n, &k);
	int ret = pow(n, k);
	printf("������Ϊ%d\n", ret);
	system("pause");
	return 0;
}