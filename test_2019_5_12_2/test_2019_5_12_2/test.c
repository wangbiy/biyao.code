//模拟实现库函数my_strcpy
# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void my_strcpy1(char* dst, const char* src)
{
	assert(dst != NULL);
	assert(src != NULL);
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = *src;
}
char* my_strcpy2(char* dst, const char* src)
{
	char* start = dst;
	assert(dst != NULL);
	assert(src != NULL);
	while (*dst=*src)
	{
		src++;
		dst++;
	}
	return start;
}
int main()
{
	char arr1[] = { 0 };
	char arr2[] = "How are you?";
	my_strcpy1(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", my_strcpy2(arr1, arr2));//链式访问
	system("pause");
	return 0;
}