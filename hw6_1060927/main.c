#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void hw6_1();
void hw6_2();
void hw6_3();
void hw6_4();
void hw6_5();

void main(void)
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.���j�M�D���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("2.�q�Ʀr�C��\n");
		printf("3.�w�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��\n");
		printf("4.���j��ƩM�D���j��ư��� �O��ƦC\n");
		printf("5.�եH static �x�s���O���Ƥ��]�p�@�p�ƾ�,�̫��X�Ө�ƳQ�I�s������\n");

		printf("\n----------------------------------\n\n");
		printf("�п�J�n���檺�@�~? 1~5 , ��'0' �h��������!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:hw6_1();break;
		case 2:hw6_2();break;
		case 3:hw6_3();break;
		case 4:hw6_4();break;
		case 5:hw6_5();break;
		case 0:flag = 0;break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}
