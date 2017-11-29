#include<stdio.h>
#include<stdlib.h>

int hw2_4(void)
{
	int i, j, s = 0, sum = 0;
	printf("珍珠奶茶為45元\n烏龍拿鐵為55元\n");
	printf("請問需要幾杯珍珠奶茶?");
	scanf("%d", &i);
	printf("請問需要幾杯烏龍拿鐵?");
	scanf("%d", &j);
	s = i + j;
	sum = i * 45 + j * 55;
	if ((s > 15 && sum > 800))
	{
		sum = sum*0.9;
		printf("超過15杯並且滿800元,享有9折優惠哦!\n優惠後金額為%d\n\n", sum);
	}
	else
		printf("總共%d杯,總金額為%d\n\n", s, sum);


}