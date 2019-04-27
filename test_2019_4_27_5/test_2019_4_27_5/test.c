# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char arr[] = "hello bit!!\n";
	memset(arr, 'x', 5);//memset的用法是将"hello bit!!"前5个字节设置为'x'
	printf("%s\n", arr);
	system("pause");
	return 0;
}