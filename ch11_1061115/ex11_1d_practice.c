#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex11_1d_practice()
{
	char option;
	do
	{
		printf("\n");
		printf("1) iPod nano\n");
		printf("2) iPhone\n");
		printf("3) iMac\n");
		printf("�п�ܧA�n���ӫ~(1~3)�� q����:");
		option = getchar();
		while (getchar() != '\n');

		switch (option)
		{
		case '1':printf("\n<<<�z��ܪ��ӫ~�O iPodnano>>>\n"); break;
		case '2':printf("\n<<<�z��ܪ��ӫ~�O iPhone>>>\n"); break;
		case '3':printf("\n<<<�z��ܪ��ӫ~�O iMac>>>\n"); break;
		case 'q':printf("\n"); break;
		default:printf("\n�S���o�˰ӫ~,�Э��s��J!!\n"); break;
		}
	} while (option != 'q');
}