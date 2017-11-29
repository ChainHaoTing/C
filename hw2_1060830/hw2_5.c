#include<stdio.h>
#include<stdlib.h>

int hw2_5(void)
{
	int i, j, s = 0, sum = 0;
	printf("珍珠奶茶為45元\n烏龍拿鐵為55元\n");
	printf("請問需要幾杯珍珠奶茶?");
	scanf("%d", &i);
	printf("請問需要幾杯烏龍拿鐵?");
	scanf("%d", &j);
	s = i + j;
	sum = i * 45 + j * 55;

	if ((s > 12 || sum > 700 || i > 9))
	{
		sum = sum*0.95;
		printf("珍珠奶茶與烏龍拿鐵購買總數超過12瓶, 或是總額達(含) 700元,\n 或是珍珠奶茶購買達(含)10瓶, 售價享有95折優惠哦!\n\n優惠後金額為%d\n", sum);
	}
	else
		printf("總共%d杯,總金額為%d\n", s, sum);


}