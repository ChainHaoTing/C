#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int n, n_2, sum = 0, sum_2 = 0;

int factorial6_4(int F0,int F1)
{
	n--;
	if (n > 1) {
		sum = F0 + F1;
		printf(" %d,", sum);          //�L�X�O��ƦC

		return (factorial6_4(F1, sum));
	}
	else {
		return sum;    //�^�ǳ̫᪺��
	}
}


int NOfactorial6_4(int F0, int F1)
{
	for (int i = 0; i < n_2-2; i++)
	{
		sum_2 = F0 + F1;
		F0 = F1;
		F1 = sum_2;
		printf(" %d,", sum_2);
	}
	return sum_2;
}


void hw6_4()
{
	int F0, F1;
	printf("\n�п�J�_�l������ F0: F1:\n");
	scanf("%d %d", &F0, &F1);
	printf("�п�J�D��ĴX��:\n");
	scanf("%d", &n);

	if (n == 1) printf("%d\n", F0);
	else if (n == 2) printf("%d\n", F1);

	else {
		n_2 = n;
		printf("���j:");
		printf("\n    �O��ƦC��: %d, %d,",F0,F1);
		printf("\n    ���j�B�⪺�Ȭ�:%d\n\n", factorial6_4(F0, F1));

		printf("�D���j:");
		printf("\n    �O��ƦC��: %d, %d,", F0, F1);
		printf("\n    �D���j�B�⪺�Ȭ�:%d\n", NOfactorial6_4(F0, F1));
	}
}
