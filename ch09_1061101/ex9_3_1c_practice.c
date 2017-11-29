#include"c.h"
#include<stdio.h>
#include<stdlib.h>

void ex9_3_1c_practice(void)
{
	double total = 0;
	int index;

	printf("請問有幾項產品:");
	scanf("%d",&index);

	struct order
	{
		char product[40];	/*產品名稱*/
		double price;		/*產品單價*/
		int quantity;		/*產品數量 */
	}num[2];

	for (int i = 0; i < index; i++) {
		printf("----產品 %d----\n", i + 1);
		printf("請輸入名稱:");
		scanf("%s", num[i].product);
		printf("請輸入單價:");
		scanf("%lf", &num[i].price);
		printf("請輸入數量:");
		scanf("%d", &num[i].quantity);
	}

	printf("\n\n<< ----定單列表---- >>\n\n");
	for (int i = 0; i < index; i++) {
		printf("產品名稱: %s\n", num[i].product);
		printf("價格: %.1f\n", num[i].price);
		printf("數量: %d\n", num[i].quantity);
		printf("總和:%.1f\n\n", num[i].price*num[i].quantity);
		total += num[i].price*num[i].quantity;
	}
	printf("\n總共價格: %.1f\n\n", total);
}