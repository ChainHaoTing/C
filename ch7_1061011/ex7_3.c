#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex7_3()
{
	int *ptri;                               /* �ŧi���V��ƪ�����ptri */
	char *ptrc;                              /* �ŧi���V�r��������ptrc */
	//double *ptr;

	//printf("sizeof(ptr)=%d\n", sizeof(ptr));
	printf("sizeof(ptri)=%d\n", sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	//printf("sizeof(*ptr)=%d\n", sizeof(*ptr));
	printf("sizeof(*ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));
}