//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
# define ROW 3
# define COL 3
int FindNum(int arr[ROW][COL], int row, int col, int key)
{
	int left = 0;
	int right = col - 1;
	while ((left <row ) && (right >= 0))
	{
		if (arr[left][right] < key)
		{
			left++;
		}
		else if (arr[left][right]>key)
		{
			right--;
		}
		else if (arr[left][right] == key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key = 0;
	int i = 0;
	int j = 0;
	int ret = 0;
	printf("����Ϊ:\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("������Ҫ�ҵ�����:");
	scanf("%d",&key);
	ret = FindNum(arr, ROW, COL,key);
	if (1 == ret)
		printf("%d�ڸ�������\n",key);
	else
		printf("%d���ڸ�������\n",key);
	system("pause");
	return 0;
}