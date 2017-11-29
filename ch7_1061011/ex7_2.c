#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex7_2()
{
	int *ptr, num = 20;
	ptr = &num;
	printf("num=%d,&num=%p\n", num, &num);                 //&位址
	printf("*ptr=%d,ptr=%p,&ptr=%p\n", *ptr, ptr, &ptr);   //*位址內容
}