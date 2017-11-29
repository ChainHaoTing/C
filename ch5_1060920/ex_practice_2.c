/*課中練習*/
#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int ex_practice_2()
{
	int i, j, people[10][2] = { {160,56},{165,65},
	                            {170,70},{155,55},
								{179,80},{168,69},
								{173,78},{180,87},
								{174,66},{164,63} };

	printf("\n身高體重紀錄系統\n\n");

	for (i = 0; i < 10; i++) {
			printf("people %2d --- 身高:%d  體重:%d\n", i + 1, people[i][0],people[i][1]);
	}
}