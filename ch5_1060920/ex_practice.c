/*課中練習*/
#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int ex_practice()
{
	int i, people[10][2] = { {1,160 },{2,165 },
	                         {3,170 },{4,155 },
					         {5,179 },{6,168 },
						     {7,173 },{8,180 },
							 {9,174 },{10,164 } };

	printf("\n身高紀錄系統\n\n");

	for (i = 0; i < 10; i++) {
		printf("people %2d --- 身高:%d \n", people[i][0], people[i][1]);
	}
}