/*�Ҥ��m��*/
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

	printf("\n���������t��\n\n");

	for (i = 0; i < 10; i++) {
		printf("people %2d --- ����:%d \n", people[i][0], people[i][1]);
	}
}