#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maun()
{
	printf("#######################\n");
	printf("#######1.play##########\n");
	printf("#######2.exit##########\n");//0�ܲ��ܱ��2
	printf("#######################\n");
	
}

void game()
{
	float b = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("���1--100��������");
		scanf("%f", &b);
		if (b > ret)
		{
			printf("�´���\n");
		}
		else if (b < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
		printf("����������:");
		scanf("%f", &a);
		
		//switch (a)
		//{
		//case 1:
		//	game();
		//	break;
		//case 2:
		//	printf("�˳�����\n");
		//	a = 0;//��a��Ϊ��
		//	break;
		//default:
		//	printf("�����������������\n");
		//	break;
		//}
		if (a == 1)
		{
			game();
			
		}
		else if (a == 2)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	} while (1);
	
	return 0;
}