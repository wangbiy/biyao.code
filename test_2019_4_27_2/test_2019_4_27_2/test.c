# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int my_strlen1(char* str)//常规方法
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int my_strlen2(char* str)//递归
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + my_strlen2(str+1);
}
int my_strlen3(char* str)
{
	char* start = str;//用一个指针存放起始指针的位置
	while (*start != '\0')
	{
		start++;
	}
	return start - str;
}
int main()//三种方法实现strlen
{
	char string[] = "acvbfgrt";
	int len1 = 0;
	int len2 = 0;
	int len3 = 0;
	len1=my_strlen1(string);
	len2=my_strlen2(string);
	len3=my_strlen3(string);
	printf("字符串的长度为:%d\n", len1);
	printf("字符串的长度为:%d\n", len2);
	printf("字符串的长度为:%d\n", len3);
	system("pause");
	return 0;
}