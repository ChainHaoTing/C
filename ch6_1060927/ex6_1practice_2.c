#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int in;

int calculate()
{
	if (in>=60){
		printf("pass\n");
	}
	else {
		printf("down\n");
	}
}

void ex6_1practice_2()
{
	printf("IF\nPass(大於60)\nDown(小於60)");
	printf("    請輸入一整數");
	scanf("%d", &in);
	calculate();
}
