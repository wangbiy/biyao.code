# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char arr1[100] = "xxxxxxxxxxxxxx";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//strcpy��ʾ�ַ����Ŀ���
	printf("%s\n", arr1);//��ʾΪbit������û��xxxxxxxx����ʾ��'\0'
	system("pause");
	return 0;
}