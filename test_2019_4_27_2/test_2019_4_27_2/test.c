# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int my_strlen1(char* str)//���淽��
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int my_strlen2(char* str)//�ݹ�
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
	char* start = str;//��һ��ָ������ʼָ���λ��
	while (*start != '\0')
	{
		start++;
	}
	return start - str;
}
int main()//���ַ���ʵ��strlen
{
	char string[] = "acvbfgrt";
	int len1 = 0;
	int len2 = 0;
	int len3 = 0;
	len1=my_strlen1(string);
	len2=my_strlen2(string);
	len3=my_strlen3(string);
	printf("�ַ����ĳ���Ϊ:%d\n", len1);
	printf("�ַ����ĳ���Ϊ:%d\n", len2);
	printf("�ַ����ĳ���Ϊ:%d\n", len3);
	system("pause");
	return 0;
}