#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex7_3()
{
	int *ptri;                               /* 宣告指向整數的指標ptri */
	char *ptrc;                              /* 宣告指向字元的指標ptrc */
	//double *ptr;

	//printf("sizeof(ptr)=%d\n", sizeof(ptr));
	printf("sizeof(ptri)=%d\n", sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	//printf("sizeof(*ptr)=%d\n", sizeof(*ptr));
	printf("sizeof(*ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));
}