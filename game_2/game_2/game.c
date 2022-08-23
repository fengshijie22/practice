#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏-----\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void Setmine(char board[ROWS][COLS], int row, int col)
{

	int count = EASY_GAME;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
	
}

void Setmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_GAME)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x > 1 && x <= row && y > 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾炸死了\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入坐标\n");
		}
	}
	if (win == row * col - EASY_GAME)
	{
		printf("恭喜你，排雷成功\n");
		Displayboard(mine, ROW, COL);
	}
}