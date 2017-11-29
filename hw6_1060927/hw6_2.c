#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int t, ans, i = 0, j = 0, k = 100;

int init()
{
	printf("請使用者設定答案(%d~%d):", j, k);
	scanf("%d", &t);
	if (t < 0 || t>100) {
		printf("-----輸入錯誤!!-----\n\n");
		return init();
	}
		system("cls");
}

int getans()
{
	system("cls");
	printf("請輸入答案(%d~%d):", j, k);
	scanf("%d", &ans);

	if (ans < j || ans>k) {
		printf("-----輸入錯誤!!-----\n\n");
		system("pause");
		return getans();
	}

	i++;
	return compare();
}

int compare()
{
	if (ans == t) {
		printf("-----恭喜答對!!-----\n\n");
		printf("共猜了%d次\n\n", i);
	}

	else if (ans > t) {
		printf("再小一點!!\n");
		k = ans;
		system("pause");
		return getans();
	}
	else if (ans < t) {
		printf("再大一點!!\n");
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
