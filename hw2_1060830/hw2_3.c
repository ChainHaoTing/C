#include<stdio.h>
#include<stdlib.h>

int hw2_3(void)
{
	int i;
	char j, k;
	printf("�п�J�ū�\n");
	scanf("%d", &i);

	if (i < 14)i = 'j';
	else if (i > 22)i = 'k';

	switch (i)
	{
	case 14:case 15:case 16:case 17:case 18: case 19: printf("�Ѯ�N, �Ь�W�~�M!\n"); break;
	case 20:case 21: case 22:printf("�Х[�@�����~�M!\n"); break;
	case 'j':printf("����ūװ��C!\n"); break;
	case 'k':printf("����ūװ���!\n");
	default:printf("input error!!\n"); break;
	}

}

