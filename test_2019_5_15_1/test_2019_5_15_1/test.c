//判断当前机器的字节序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct test
{
	int i;
	char c;
}t;
int check_sys()
{
	t.i = 1;
	return t.c;
}
int main()
{
	int ret = check_sys();
	if (ret)
	{
		printf("为小端\n");
	}
	else
		printf("为大端\n");
	system("pause");
	return 0;
}