# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char arr[] = "hello bit!!\n";
	memset(arr, 'x', 5);//memset���÷��ǽ�"hello bit!!"ǰ5���ֽ�����Ϊ'x'
	printf("%s\n", arr);
	system("pause");
	return 0;
}