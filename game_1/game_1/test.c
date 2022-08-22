#define  _CRT_SECURE_NO_WARNINGS 1
#include  "game.h"

void menu()
{
	printf("*******  1.play *******\n");
	printf("*******  2.exit *******\n");
}

void game()
{
	char board[ROW][COL];
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
		Displayboard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
		Displayboard(board, ROW, COL);
	}
}

int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 2:
		{
			printf("�˳�����\n");
			input = 0;
			break;
		}
		default:
		{
			printf("ѡ�����,������ѡ��:>");
			break;
		}
		}

	} while (input);
	return 0;
}