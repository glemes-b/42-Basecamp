#include "sudoku.h"

Square *** setUpPuzzle(int ** puzzle)
{
	Square *** sudoku;
	int i, j;
	
	sudoku = malloc(sizeof(Square**)*9); //aqui queremos alocar memória para cada matriz que rege a memória

	/* loop through rows*/
	for (i= 0; i < 9; i++)
	{
		sudoku[i] = (Square**)malloc(sizeof(Square*)*9);

		/* loop through columns */
		for (j = 0; j < 9; j++)
		{
			sudoku[i][j] = (Square*)malloc(sizeof(Square)*9);
		
			sudoku[i][j] ->number = puzzle[i][j];
			
			sudoku[i][j] ->row = i;
			sudoku[i][j] ->column = j;
			if(sudoku[i][j] ->number != 0)
			{
				sudoku[i][j] ->code = POSSIBLE; 
			}
			else
			{
			sudoku[i][j] ->code = 0; 
			}
		}
	}

}

int ** createPuzzle()
{
	int ** puzzle;
	int i, j;
	int array[9][9] = { 0, 1, 9, 	0, 0, 2, 	0, 0, 0,
						4, 7, 0,	6, 9, 0, 	0, 0, 1,
						0, 0, 0, 	4, 0, 0, 	0, 9, 0,
			 
						8, 9, 4, 	5, 0, 7,	0, 0, 0,
						0, 0, 0, 	0, 0, 0,	0, 0, 0,
						0, 0, 0, 	2, 0, 1,	9, 5, 8,

						0, 5, 0, 	0, 0, 6,	0, 0, 0,
						6, 0, 0, 	0, 2, 8,	0, 7, 9,
						0, 0, 0, 	1, 0, 0,	8, 6, 0 };

	puzzle = (int **)malloc(sizeof(int*)*9); //aqui basicamente estou alocando 9 matrizes
	
	for (i= 0; i < 9; i++)
	{
		puzzle[i] = (int*)malloc(sizeof(int)*9);

		for (j = 0; j < 9; j++)
		{
			puzzle[i][j] = array[i][j];
		}
	}

	return puzzle;
}

void printPuzzle(int ** puzzle)

{
	int i, j;

	printf("------------------------------\n");
	for (i = 0; i < 9; i++)
	{
		printf("|");
		//print each row
		for (j = 0; j < 9; j++)
		{
			printf(" %d ", puzzle[i][j]);
			if(((j + 1) % 3) == 0)
			printf("|");
		}
		printf("\n");
		if ((i + 1) % 3 == 0)
		printf("------------------------------\n");
	}
}