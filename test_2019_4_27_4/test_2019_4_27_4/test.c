# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char arr1[100] = "xxxxxxxxxxxxxx";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//strcpy表示字符串的拷贝
	printf("%s\n", arr1);//显示为bit，后面没有xxxxxxxx，表示有'\0'
	system("pause");
	return 0;
}