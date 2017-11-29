#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void hw6_1();
void hw6_2();
void hw6_3();
void hw6_4();
void hw6_5();

void main(void)
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.患癹㎝獶患癹ㄧ计―ㄢ计 gcd(程そ计)\n");
		printf("2.瞦计笴栏\n");
		printf("3.﹚竡ㄧ计, 俱计程, 俱计程\n");
		printf("4.患癹ㄧ计㎝獶患癹ㄧ计磅︽ 禣ん计\n");
		printf("5.刚 static 纗摸ㄧ计い砞璸璸计竟,程块赣ㄧ计砆㊣Ω计\n");

		printf("\n----------------------------------\n\n");
		printf("叫块璶磅︽穨? 1~5 , '0' 玥挡磅︽!");
		scanf("%d", &input);

		switch (input)
		{
		case 1:hw6_1();break;
		case 2:hw6_2();break;
		case 3:hw6_3();break;
		case 4:hw6_4();break;
		case 5:hw6_5();break;
		case 0:flag = 0;break;

		default:break;
		}
		system("pause");
		system("cls");
	}
}
