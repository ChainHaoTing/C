/*課中練習*/
#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int ex_practice_1()
{
	int i,j, people[10][2] ;

	printf("\n身高紀錄系統\n\n");

	printf("請輸入身高:\n");
	for (i = 0; i < 10; i++){
		printf("people%2d hight:", i + 1);
		scanf("%d", &people[i][1]);
		people[i][0] = i+1;
	}

	printf("\n此十人身高為\n\n");

	for (i = 0; i < 10; i++) {
			printf("people %2d --- 身高:%d \n",people[i][0], people[i][1]);
	}
}