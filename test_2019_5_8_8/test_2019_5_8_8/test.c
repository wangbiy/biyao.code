# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("����һ����:");
	scanf("%d", &a);
	b = ~a;
	//a:00000000000000000000000000000001
	//b:11111111111111111111111111111110(���룩
	//  10000000000000000000000000000001(���룩
	//  10000000000000000000000000000010(ԭ��-2��
	printf("a�İ�λȡ��ֵΪ:%d\n", b);
	system("pause");
	return 0;
}