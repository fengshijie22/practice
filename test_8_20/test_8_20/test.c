#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	//int a = 2;
//	//int ret = Fun(a);
//	printf("%d\n", Fun(2));
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* string)
//{
//	//int left = 0;
//	//int right = my_strlen(string) - 1;
//	//while (left < right)
//	//{
//	//	char tmp = *(string + left);//string[left]Óë*(string+left)Ò»Ñù;
//	//	*(string + left) = *(string + right);
//	//	*(string + right) = tmp;
//	//	left++;
//	//	right--;
//	//}
//	char tmp = *string;
//	int len = my_strlen(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (my_strlen(string+1)>=2)
//	{
//		reverse_string(string + 1);
//		
//	}
//     *(string + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


double Pow(int a, int b)
{
	if (b > 0)
	{
		if (b > 1)
		{
			return a * Pow(a, b - 1);
		}
		else
		{
			return a;
		}
	}
	else if(b==0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(a, -b);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int k = 0;
	scanf("%d", &k);
	double s = Pow(n, k);
	printf("%lf\n", s);
	return 0;
}