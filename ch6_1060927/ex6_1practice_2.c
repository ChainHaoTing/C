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
	printf("IF\nPass(�j��60)\nDown(�p��60)");
	printf("    �п�J�@���");
	scanf("%d", &in);
	calculate();
}
