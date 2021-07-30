 #include <stdio.h>
 #include <stdlib.h>

char POSSIBLE = 0x1FF

typedef struct Box
{
	struct Box * next;
} Box;

int struct Square
{
	int number;
	/* 	111101011 
		987654321*/
	char code;
	Box * box;
	int row;
	int column;
} Square;

 int ** createPuzzle();
 void printPuzzle(int ** puzzle);
 Square *** setUpPuzzle(int ** puzzle);