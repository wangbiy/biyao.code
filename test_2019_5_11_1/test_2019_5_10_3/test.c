#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int average1(int a, int b)//����2 4 :2+4=6 6�Ķ�����Ϊ:110 ����һλΪ3
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
	return (a&b) + ((a^b) >> 1);//2&4Ϊ:000, 2^4Ϊ:110 ����һλΪ011 ���Ϊ3
}
int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	printf("������������:");
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