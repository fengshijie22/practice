#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int n = 0;
//	int min = 0;
//	if (a > b)
//	{
//		min = b;
//	}
//	else
//	{
//		min = a;
//	}
//	for (n = min; n > 0; n--)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			printf("%d\n", n);
//		}
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int n = 0;
//	if (a < b)
//	{
//		int c = a;
//		a = b;
//		b = c;
//	;
//	}
//	while (1)
//	{
//		/*n = a % b;	
//		a = b;
//		b = n; */
//		if (a % b !=0)
//		{
//			int d = a % b;
//			a = b;
//			b = d;
//		}
//		else
//		{
//			printf("%d\n", b);
//			break;
//		}
//	}
//	//printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		/*if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}*/
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 101; i <= 200; i+=2)
//	{	
//		int j = 0;
//		int a = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a = 0;
//				break;
//			}
//			
//		}
//		if (a == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i - 9) % 10 == 0)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
//again:
	while (1)
	{
		printf("您的电脑将在两分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
		}
	}
	/*else
	{
		goto again;
	}*/
	return 0;
}