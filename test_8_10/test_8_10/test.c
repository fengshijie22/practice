#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maun()
{
	printf("#######################\n");
	printf("#######1.play##########\n");
	printf("#######2.exit##########\n");//0能不能变成2
	printf("#######################\n");
	
}

void game()
{
	float b = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请猜1--100的整数：");
		scanf("%f", &b);
		if (b > ret)
		{
			printf("猜大了\n");
		}
		else if (b < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
    float a = 0;
	
	srand((unsigned int)time(NULL));
	
	do
	{
		maun();
		printf("请输入整数:");
		scanf("%f", &a);
		
		//switch (a)
		//{
		//case 1:
		//	game();
		//	break;
		//case 2:
		//	printf("退出程序\n");
		//	a = 0;//把a变为假
		//	break;
		//default:
		//	printf("输入错误，请重新输入\n");
		//	break;
		//}
		if (a == 1)
		{
			game();
			
		}
		else if (a == 2)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (1);
	
	return 0;
}