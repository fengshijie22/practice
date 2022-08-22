#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%-2d ", arr[i][j]);
//
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//}

void sort(int a[], int s)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < s-1; i++)
	{
		for (j = 0; j < s-1-i; j++)
		{
			if (a[j] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	printf("%c ", arr);
	return 0;
}


