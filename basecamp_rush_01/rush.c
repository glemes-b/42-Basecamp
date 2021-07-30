#include <unistd.h>
#include <stdlib.h>

int	g_matriz[6][6];

int	my_comparison_col_up(int x, int y)
{
	int n;
	int a;

	n = g_matriz[x][y];
	a = '1';
	if (g_matriz[x][y] == '4')
	{
		while (a < 4)
		{
			x++;
			if (g_matriz[x][y] != a)
				return (1);
			a++;
		}
		return (0);
	}
	while (g_matriz[x][y] != '4')
	{
		if ((g_matriz[x][y] < g_matriz[x + 1][y]) && x != 0)
			a++;
		x++;
	}
	if (n == a)
		return (0);
	return (1);
}

int	my_comparison_col_down(int x, int y)
{
	int n;
	int a;

	n = g_matriz[x][y];
	a = '1';
	if (g_matriz[x][y] == '4')
	{
		while (a < '5')
		{
			x--;
			if (g_matriz[x][y] != a)
				return (1);
			a++;
		}
		return (0);
	}
	while (g_matriz[x][y] != '4')
	{
		if ((g_matriz[x][y] < g_matriz[x - 1][y]) && x != 5)
			a++;
		x--;
	}
	if (n == a)
		return (0);
	return (1);
}

int	my_comparison_row_left(int x, int y)
{
	int n;
	int a;

	n = g_matriz[x][y];
	a = '1';
	if (g_matriz[x][y] == '4')
	{
		while (a < '5')
		{
			y++;
			if (g_matriz[x][y] != a)
				return (1);
			a++;
		}
		return (0);
	}
	while (g_matriz[x][y] != '4')
	{
		if ((g_matriz[x][y] < g_matriz[x][y + 1]) && y != 0)
			a++;
		y++;
	}
	if (n == a)
		return (0);
	return (1);
}

int	my_comparison_row_right(int x, int y)
{
	int n;
	int a;

	n = g_matriz[x][y];
	a = '1';
	if (g_matriz[x][y] == '4')
	{
		while (a < '5')
		{
			y--;
			if (g_matriz[x][y] != a)
				return (1);
			a++;
		}
		return (0);
	}
	while (g_matriz[x][y] != '4')
	{
		if ((g_matriz[x][y] < g_matriz[x][y - 1]) && y != 5)
			a++;
		y--;
	}
	if (n == a)
		return (0);
	return (1);
}

void	rush(char **n)
{
	int	x;
	int y;

//col_up
	g_matriz[0][1] = n[1][0];
	g_matriz[0][2] = n[1][2];
	g_matriz[0][3] = n[1][4];
	g_matriz[0][4] = n[1][6];
//col_down
	g_matriz[5][1] = n[1][8];
	g_matriz[5][2] = n[1][10];
	g_matriz[5][3] = n[1][12];
	g_matriz[5][4] = n[1][14];
//row_left
	g_matriz[1][0] = n[1][16];
	g_matriz[2][0] = n[1][18];
	g_matriz[3][0] = n[1][20];
	g_matriz[4][0] = n[1][22];
//row_right
	g_matriz[1][5] = n[1][24];
	g_matriz[2][5] = n[1][26];
	g_matriz[3][5] = n[1][28];
	g_matriz[4][5] = n[1][30];

	g_matriz[1][1] = '1';
	g_matriz[1][2] = '2';
	g_matriz[1][3] = '3';
	g_matriz[1][4] = '4';
	g_matriz[2][1] = '2';
	g_matriz[2][2] = '3';
	g_matriz[2][3] = '4';
	g_matriz[2][4] = '1';
	g_matriz[3][1] = '3';
	g_matriz[3][2] = '4';
	g_matriz[3][3] = '1';
	g_matriz[3][4] = '2';
	g_matriz[4][1] = '4';
	g_matriz[4][2] = '1';
	g_matriz[4][3] = '2';
	g_matriz[4][4] = '3';

	y = 0;
	x = 0;
	while (y < 4)
	{
		y++;
		if (my_comparison_col_up(x, y) == 1)
			write (1, "n", 1);
		else
			write (1, "p", 1);
	}
	x = 5;
	y = 0;
	while (y < 4)
	{
		y++;
		if (my_comparison_col_down(x, y) == 1)
			write (1, "n", 1);
		else
			write (1, "p", 1);
	}
	x = 0;
	y = 0;
	while (x < 4)
	{
		x++;
		if (my_comparison_row_left(x, y) == 1)
			write (1, "n", 1);
		else
			write (1, "p", 1);
	}
	x = 0;
	y = 5;
	while (x < 4)
	{
		x++;
		if (my_comparison_row_right(x, y) == 1)
			write (1, "n", 1);
		else
			write (1, "p", 1);
	}
}
