#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//Ê¹ÓÃÖ¸ÕëÄæĞò×Ö·û´®
void reverse_string(char* string)
{
	char* p = string;
	char* q = string;
	while (*q != '\0')
	{
		q++;
	}
	q--;
	while (p < q)
	{
		char tmp = *p;
		*p = *q;
		*q = tmp;
		p++;
		q--;
	}
}
int main()
{
	char string[] = "abcdefghj";
	reverse_string(string);
	printf("%s\n", string);
	system("pause");
	return 0;
}