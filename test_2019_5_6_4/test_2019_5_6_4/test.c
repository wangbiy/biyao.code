# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
void copy_n(char src[],char dst[],int n)
{
	int len = 0;
	int i = 0;
	for (i = 0; src[i] != '\0';i++)
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < len)
		{
			dst[i] = src[i];
		}
		else
			dst[i] = '\0';
	}
}
int main()
{
	char src[] = "abcfg";
	char dst[] = "dfjuy";
	int n = 0;
	printf("ÇëÊäÈën:");
	scanf("%d", &n);
	copy_n(&src,&dst, n);
	printf("%s\n", dst);
	system("pause");
	return 0;
}
