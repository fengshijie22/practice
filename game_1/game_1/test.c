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
		printf("玩家胜\n");
		Displayboard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("平局\n");
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
		printf("请选择:>");
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
			printf("退出程序\n");
			input = 0;
			break;
		}
		default:
		{
			printf("选择错误,请重新选择:>");
			break;
		}
		}

	} while (input);
	return 0;
}