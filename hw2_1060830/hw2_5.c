#include<stdio.h>
#include<stdlib.h>

int hw2_5(void)
{
	int i, j, s = 0, sum = 0;
	printf("�ï]������45��\n�Q�s���K��55��\n");
	printf("�аݻݭn�X�M�ï]����?");
	scanf("%d", &i);
	printf("�аݻݭn�X�M�Q�s���K?");
	scanf("%d", &j);
	s = i + j;
	sum = i * 45 + j * 55;

	if ((s > 12 || sum > 700 || i > 9))
	{
		sum = sum*0.95;
		printf("�ï]�����P�Q�s���K�ʶR�`�ƶW�L12�~, �άO�`�B�F(�t) 700��,\n �άO�ï]�����ʶR�F(�t)10�~, ����ɦ�95���u�f�@!\n\n�u�f����B��%d\n", sum);
	}
	else
		printf("�`�@%d�M,�`���B��%d\n", s, sum);


}