# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (((B == 2) + (A == 2) == 1) &&
							((B == 2) + (E == 4) == 1) &&
							((C == 1) + (D == 2) == 1) &&
							((C == 5) + (D == 3) == 1) &&
							((E == 4) + (A == 1) == 1))
						{
							int num = 0;
							int flag = 1;
							num |= (1 << (A - 1));
							num |= (1 << (B - 1));
							num |= (1 << (C - 1));
							num |= (1 << (D - 1));
							num |= (1 << (E - 1));
							while (num)
							{
								if (num % 2 == 0)
								{
									flag = 0;
								}
								num /= 2;
							}
							if (flag==1)
							printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
