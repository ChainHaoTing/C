#include<stdio.h>
#include<stdlib.h>

int hw2_4(void)
{
	int i, j, s = 0, sum = 0;
	printf("�ï]������45��\n�Q�s���K��55��\n");
	printf("�аݻݭn�X�M�ï]����?");
	scanf("%d", &i);
	printf("�аݻݭn�X�M�Q�s���K?");
	scanf("%d", &j);
	s = i + j;
	sum = i * 45 + j * 55;
	if ((s > 15 && sum > 800))
	{
		sum = sum*0.9;
		printf("�W�L15�M�åB��800��,�ɦ�9���u�f�@!\n�u�f����B��%d\n\n", sum);
	}
	else
		printf("�`�@%d�M,�`���B��%d\n\n", s, sum);


}