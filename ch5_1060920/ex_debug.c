#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int ex_debug()
{
	/* score�O2�C3�檺�}�C */
	int score[2][3] = { { 10, 20,30 },{ 40, 50, 60 } };   //�ְ}�C�j�p 3
	int i, j;
	for (i = 0; i < 2; i++) {                       // <= (�P�_��) �������i�[�ť�
		for (j = 0; j < 3; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	}

}


/*
��l�{��
#include <stdio.h>
#include <stdlib.h>
int main()
{
	 score�O2�C3�檺�}�C 
	int score[2][] = { { 10, 20,30 },{ 40, 50, 60 } };
	int i, j;
	for (i = 0; i < = 2; i++)
		for (j = 0; j <= 3; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	system("PAUSE");
	return 0;
}*/