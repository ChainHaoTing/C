#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int cout()
{
	static int num = 200;
	printf("�ثe�I�s��%d��\n", ++num);
}

void hw6_5()
{
	int i;
	printf("�ثe�w�Q�I�s���� 200 \n\n");
	printf("�ݭn�I�s�X��:");
	scanf("%d", &i);
	for (int j = 0; j < i; j++)
		cout();
}