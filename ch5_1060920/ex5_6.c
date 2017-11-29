#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex5_6()
{
	int i, j, k, temp, flag,size;
	int arr[] = { 80,30,40,70,50,60 };
	size = sizeof(arr) / sizeof(int);
	printf("\n-----資料排序前-----\n");

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (i = 0; i < 25; i++)
		printf("-");
	printf("\n");

	/*****Bubble sort*****/
	for (i = 0; i < size - 1; i++) {
		flag = 0;
		for (j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				flag = 1;                //若有對調將flag設為1
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
		printf("#%d pass:", i + 1);
		for (k = 0; k < size; k++)
			printf("%d ", arr[k]);
		printf("\n");
		if (flag == 0)                //當flag==0表示 無對調 跳出迴圈
 			break;
	}
	/*******************/

	for (i = 0; i < 25; i++)
		printf("-");
	printf("\n");

	printf("-----資料排序後-----\n");

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}