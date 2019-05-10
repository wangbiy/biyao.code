#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char* string)
{
	int len = 0;
	while (*string != '\0')
	{
		len++;
		string++;
	}
	return len;
}
void reverse_swap(char arr[],int left,int right)
{
	char tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
char reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;
	int i = 0;
	reverse_swap(arr, left, right);//i ma a tneduts
	while (arr[i] != '\0')
	{
		left = i;
		while ((arr[i] != '\0') && (arr[i] != ' '))
		{
			i++;
		}
		right = i - 1;
		reverse_swap(arr, left, right);
		if (arr[i] != '\0')
			i++;
	}
	return arr;
}
int main()
{
	char str[] = "student a am i";
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}