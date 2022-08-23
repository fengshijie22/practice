#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******    1.play   ******\n");
	printf("******    2.exit   ******\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(show, ROW, COL);
	Setmine(mine, ROW, COL);
    //Displayboard(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳�����");
			input = 0;
			break; 
		default :
			printf("ѡ�����������ѡ��\n");
			input = 2;
			break;
		}

	} while (input);
	return 0;
}