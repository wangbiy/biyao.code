# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int strlen1(char* string)//�ݹ�
{
	if (*string == '\0')
		return 0;
	else
		return 1 + strlen1(string + 1);
}
int strlen2(char* string)//�ǵݹ�
{
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
int main()
{
	char s[] = "adfgert";
	int len1 = strlen1(&s);
	printf("����Ϊ%d\n", len1);
	int len2=strlen2(&s);
	printf("����Ϊ%d\n", len2);
	system("pause");
	return 0;
}