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
		if (i == MAX)        /* 當i的值為MAX時，表示陣列已滿，即停止輸入 */
		{
			printf("Array space has been used up!!\n");
			i++;                                        /* 此行先將i值加1，因為23行會把i的值減1掉 */
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