/*�Ҥ��m��*/
#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int ex_practice_1()
{
	int i,j, people[10][2] ;

	printf("\n���������t��\n\n");

	printf("�п�J����:\n");
	for (i = 0; i < 10; i++){
		printf("people%2d hight:", i + 1);
		scanf("%d", &people[i][1]);
		people[i][0] = i+1;
	}

	printf("\n���Q�H������\n\n");

	for (i = 0; i < 10; i++) {
			printf("people %2d --- ����:%d \n",people[i][0], people[i][1]);
	}
}