#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int square6_3(n)  //�n�D��J�@�ơA�ñN���ƥ����Ǧ^
{
	int total;
	total = n*n;
	return total;
}

void ex6_3()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���:");
	scanf("%d", &num);
	ans = square6_3(num);      //num��J�ƨ禡�p�� square6_3(n)
	printf("%d ������O: %d\n", num, ans);

}