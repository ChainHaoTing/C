#include"c.h"
#include"stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void ex7_4()
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &a;	//將ptr1設為a的位址
	ptr2 = &b;	//將ptr2設為b的位址
	printf("a=%p,\tb=%p,\nptr1=%p,\tptr2=%p\n", &a, &b, ptr1, ptr2);
	*ptr1 = 7;	//a的值改為7
	*ptr2 = 32; //b的值改為32
	a = 17;		//a的值改為17
	ptr1 = ptr2;//ptr1的內容改為prt2 ,b的位址
	*ptr1 = 9;	//b的內容改為9
	ptr1 = &a;	//ptr1的內容改為a位址
	a = 64;		//a改為64
	*ptr2 = *ptr1 + 5; //b=a+5
	ptr2 = &a;	//ptr2的內容改為a位址

	printf("a=%2d,\t b=%2d,\t *ptr1=%2d,\t *ptr2=%2d\n", a, b, *ptr1, *ptr2);
	printf("ptr1=%p, ptr2=%p\n", ptr1, ptr2);

}