#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex9_3_1c_practice(void)
{
	double total = 0;
	int index;

	printf("�аݦ��X�����~:");
	scanf("%d",&index);

	struct order
	{
		char product[40];	/*���~�W��*/
		double price;		/*���~���*/
		int quantity;		/*���~�ƶq */
	}num[2];

	for (int i = 0; i < index; i++) {
		printf("----���~ %d----\n", i + 1);
		printf("�п�J�W��:");
		scanf("%s", num[i].product);
		printf("�п�J���:");
		scanf("%lf", &num[i].price);
		printf("�п�J�ƶq:");
		scanf("%d", &num[i].quantity);
	}

	printf("\n\n<< ----�w��C��---- >>\n\n");
	for (int i = 0; i < index; i++) {
		printf("���~�W��: %s\n", num[i].product);
		printf("����: %.1f\n", num[i].price);
		printf("�ƶq: %d\n", num[i].quantity);
		printf("�`�M:%.1f\n\n", num[i].price*num[i].quantity);
		total += num[i].price*num[i].quantity;
	}
	printf("\n�`�@����: %.1f\n\n", total);
}