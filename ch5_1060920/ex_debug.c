#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int ex_debug()
{
	/* score是2列3行的陣列 */
	int score[2][3] = { { 10, 20,30 },{ 40, 50, 60 } };   //少陣列大小 3
	int i, j;
	for (i = 0; i < 2; i++) {                       // <= (判斷式) 中間不可加空白
		for (j = 0; j < 3; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	}

}


/*
原始程式
#include <stdio.h>
#include <stdlib.h>
int main()
{
	 score是2列3行的陣列 
	int score[2][] = { { 10, 20,30 },{ 40, 50, 60 } };
	int i, j;
	for (i = 0; i < = 2; i++)
		for (j = 0; j <= 3; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	system("PAUSE");
	return 0;
}*/