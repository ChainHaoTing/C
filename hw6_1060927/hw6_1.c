#include"stdafx.h"
#include"c.h"
#include <stdio.h>
#include <stdlib.h>

int i, s,i_2,s_2;

int gcd(int n, int m)
{
	s = i;
	i = n%m;
	if(i==0)return s;
	return(gcd(m, i));
}

int gcd_2(int n, int m)
{
	do{
		s_2 = i_2;
		i_2 = n%m;
		n = m;
		m = i_2;
	} while (i_2>0);

	return s_2;
}

void hw6_1()
{
	int num1 = 0, num2 = 0, g, g_2, c = 0;
	printf("―ㄢ计程そ计(gcd)\n");
	printf("叫块ㄢ计:");
	scanf("%d %d", &num1, &num2);

	if (num2 > num1) {       //琵num1程
		c = num1;
		num1 = num2;
		num2 = c;
	}

	if ((num1%num2) == 0) {   //琵gcdnum2
		g = g_2 = num2;
	}

	else {
		g = gcd(num1, num2);
		g_2 = gcd_2(num1, num2);
	}
	printf("\n程そ计(患癹笲衡):%d\n", g);
	printf("\n程そ计(獶患癹笲衡):%d\n", g_2);
}