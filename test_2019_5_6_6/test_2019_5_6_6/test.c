# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void deblank(char string[])
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		while (string[i] == ' '&&flag == 1)
		{
			for (j = i; string[j] != '\0'; j++)
			{
				string[j] = string[j + 1];
			}
			string[j] = '\0';
		}
		if (string[i] == ' ')
			flag = 1;
		else
			flag = 0;
	}

}
int main()
{
	char string[] = "a  dfgh      kl";
	deblank(&string);
	printf("%s\n", string);
	system("pause");
	return 0;
}