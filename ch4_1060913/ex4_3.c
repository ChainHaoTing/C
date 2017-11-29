#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex4_3(void)
{
	int A[5] = { 7,48,30,17,62 }, i, min, max;
	min = max = A[0];

	for ( i = 0 ; i < 5 ; i++)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}
	printf("The maximun value of the array element :%d\n", max);
	printf("The minimum value of the array element :%d\n", min);

}