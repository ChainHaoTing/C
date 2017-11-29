#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/*
*結構成員的初值設定
*例: struct order num1 = { "iPod nano", 6700.0, 20 };
*/

void ex9_1c_practice(void)
{
	struct result
	{
		char name[21];		/*姓名*/
		int res;			/*成績*/
	}num1 = { "Johnson" ,90 };
	//struct order num1 = { "Johnson" ,90 };		/* 以設定方式給予初值 */

	printf("姓名: %s\n", num1.name);
	printf("成績: %d\n", num1.res);
}