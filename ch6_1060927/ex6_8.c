#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>


int number = 100; /* �w�q�����ܼ� */

				  /* �w�qoutput( ) */
void output6_8()
{
	int number = 200; /* �w�q�ϰ��ܼ� */
	printf("number is %d\n", number); /* ��Xnumber */
}

void ex6_8()
{
	/* ���ը�Ʀb�ϰ��ܼƻP�����ܼƶ������� */
	printf("number is %d\n", number);
	output6_8(); /* �I�soutput( )��� */
}
