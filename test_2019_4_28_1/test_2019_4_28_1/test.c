# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int Get(char* ch)
{
	if (ch >= '0'&&ch <= '9')
	{
		return ch - '0';
	}
	else if (ch >= 'A'&&ch <= 'F')
	{
		return ch - 'A' + 10;
	}
	else if (ch >= 'a'&&ch <= 'f')
	{
		return ch - 'a' + 10;
	}
	return -1;
}
transform(char* s)
{
	int i = 0;
	int len = strlen(s);
	int tmp = 1;
	int sum = 0;
	for (i = len - 1; i >= 0; i--)
	{
		sum += tmp*Get(*(s + i));
		tmp *= 16;
	}
	return sum;
}
int main()
{
	char str[50];
	int result = 0;
	printf("请输入一个十六进制数:");
	scanf("%s", &str);
	result=transform(&str);
	printf("转换后的十进制数为:%d\n", result);
	system("pause");
	return 0;
}