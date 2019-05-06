# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# include "increment.h"
# include "negate.h"
int main()
{
	printf("%d: increment:%d,negate:%d\n", 10, increment(10),negate(10));
	printf("%d: increment:%d,negate:%d\n", 0, increment(0), negate(0));
	printf("%d: increment:%d,negate:%d\n", -10, increment(-10), negate(-10));
	system("pause");
	return 0;
}