#include"c.h"
#include"stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void ex7_4()
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &a;	//�Nptr1�]��a����}
	ptr2 = &b;	//�Nptr2�]��b����}
	printf("a=%p,\tb=%p,\nptr1=%p,\tptr2=%p\n", &a, &b, ptr1, ptr2);
	*ptr1 = 7;	//a���ȧאּ7
	*ptr2 = 32; //b���ȧאּ32
	a = 17;		//a���ȧאּ17
	ptr1 = ptr2;//ptr1�����e�אּprt2 ,b����}
	*ptr1 = 9;	//b�����e�אּ9
	ptr1 = &a;	//ptr1�����e�אּa��}
	a = 64;		//a�אּ64
	*ptr2 = *ptr1 + 5; //b=a+5
	ptr2 = &a;	//ptr2�����e�אּa��}

	printf("a=%2d,\t b=%2d,\t *ptr1=%2d,\t *ptr2=%2d\n", a, b, *ptr1, *ptr2);
	printf("ptr1=%p, ptr2=%p\n", ptr1, ptr2);

}