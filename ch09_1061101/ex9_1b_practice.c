#include"c.h"
#include<stdio.h>
#include<stdlib.h>


void ex9_1b_practice(void)
{
	/* 宣告結構triangle的型態，以成員運算子" . "存取結構成員 */
	struct square
	{
		double length, area;	 /* 三角形的長與高 */
		//double area;		 /* 三角形的面積 */
	};
	struct square tri;

	printf("請輸入正方形的邊: ");
	scanf("%lf", &tri.length);		/* 以tri.length存取結構成員length */

	tri.area = tri.length * tri.length;		/*以tri.area 存取結構成員area*/
	printf("正方形的面積為: %.2f\n", tri.area);
}