#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

int add10(int *p1)       //利用位址內容運算
{
	*p1 = *p1 + 10;
}

void ex7_6()
{
	int a = 5;
	printf("Before call add10(),a=%d\n", a);
	add10(&a);     //傳遞a的位址給 add10()
	printf("After call add10(),a=%d\n\n",a);
}