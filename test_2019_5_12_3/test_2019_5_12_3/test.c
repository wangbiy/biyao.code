//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ������һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void Rank(int arr[], int sz)
{
	int tmp = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		if (arr[left] % 2 == 0)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			right--;
		}
		else
		{
			left++;
		}
	}
}
int main()
{
	int arr[] = { 4, 7, 18, 17, 13, 2, 14, 45, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Rank(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}