#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int t, ans, i = 0, j = 0, k = 100;

int init()
{
	printf("�ШϥΪ̳]�w����(%d~%d):", j, k);
	scanf("%d", &t);
	if (t < 0 || t>100) {
		printf("-----��J���~!!-----\n\n");
		return init();
	}
		system("cls");
}

int getans()
{
	system("cls");
	printf("�п�J����(%d~%d):", j, k);
	scanf("%d", &ans);

	if (ans < j || ans>k) {
		printf("-----��J���~!!-----\n\n");
		system("pause");
		return getans();
	}

	i++;
	return compare();
}

int compare()
{
	if (ans == t) {
		printf("-----���ߵ���!!-----\n\n");
		printf("�@�q�F%d��\n\n", i);
	}

	else if (ans > t) {
		printf("�A�p�@�I!!\n");
		k = ans;
		system("pause");
		return getans();
	}
	else if (ans < t) {
		printf("�A�j�@�I!!\n");
		j = ans;
		system("pause");
		return getans();
	}
}

void hw6_2()
{
	init();
	getans();
}
