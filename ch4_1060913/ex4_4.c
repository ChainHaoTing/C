#include<stdio.h>
#include<stdlib.h>
#include"c.h"
#define MAX 5

void ex4_4(void)
{
	int score[MAX], i = 0, num;
	float sum = 0.0f;
	printf("Please input the score,input 0 to end:\n");
	do
	{
		if (i == MAX)        /* ��i���Ȭ�MAX�ɡA��ܰ}�C�w���A�Y�����J */
		{
			printf("Array space has been used up!!\n");
			i++;                                        /* ������Ni�ȥ[1�A�]��23��|��i���ȴ�1�� */
			break;
		}
		printf("Please input the score:");
		scanf("%d", &score[i]);
	} while (score[i++]>0);
	num = i - 1;
	for (i = 0; i < num; i++)
		sum += score[i];
	printf("average score %.2f\n", sum / num);
}