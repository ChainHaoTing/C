#include"c.h"
#include <stdio.h>
#include <stdlib.h>

/*結構指標變數與函數*/

struct work
{
	char name[20]; /* 姓名 */
	int hours; /* 工作時數 */
	int pay; /* 時薪 */
	int total_pay; /* 總工資 */
}service; /* 定義結構變數 */

void calculate(struct work *);

void ex9_2b(void)
{
	service.pay = 120;
	printf("請輸入您的姓名: ");
	//gets(service.name);
	scanf("%s", service.name);

	printf("請輸入工作時數: ");
	scanf("%d", &service.hours);

	calculate(&service);/*呼叫calculate()函數，傳送service結構位址 */
	
	printf("您總共的薪資是 $%d\n",service.total_pay);
}

/* 定義calculate( )函數，以結構指標變數接收結構位址 */

void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours*ptr->pay; /* 計算總工資 */
}