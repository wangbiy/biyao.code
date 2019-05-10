#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int average1(int a, int b)//例如2 4 :2+4=6 6的二进制为:110 右移一位为3
{
	return (a + b) >> 1;
}
int average2(int a, int b)
{
	return a + (b - a) / 2;
}
int average3(int a, int b)
{
	return a + ((b - a) >> 1);
}
int average4(int a, int b)
{
	return (a&b) + ((a^b) >> 1);//2&4为:000, 2^4为:110 右移一位为011 相加为3
}
int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	printf("请输入两个数:");
	scanf("%d%d", &n, &m);
	ret = average1(n, m);
	printf("%d\n",ret);
	ret=average2(n, m);
	printf("%d\n", ret);
	ret=average3(n, m);
	printf("%d\n", ret);
	ret=average4(n, m);
	printf("%d\n", ret);
	system("pause");
	return 0;
}