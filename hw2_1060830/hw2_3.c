#include<stdio.h>
#include<stdlib.h>

int hw2_3(void)
{
	int i;
	char j, k;
	printf("請輸入溫度\n");
	scanf("%d", &i);

	if (i < 14)i = 'j';
	else if (i > 22)i = 'k';

	switch (i)
	{
	case 14:case 15:case 16:case 17:case 18: case 19: printf("天氣冷, 請穿上外套!\n"); break;
	case 20:case 21: case 22:printf("請加一件薄外套!\n"); break;
	case 'j':printf("今日溫度偏低!\n"); break;
	case 'k':printf("今日溫度偏高!\n");
	default:printf("input error!!\n"); break;
	}

}

