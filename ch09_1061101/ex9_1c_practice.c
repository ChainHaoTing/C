#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/*
*���c��������ȳ]�w
*��: struct order num1 = { "iPod nano", 6700.0, 20 };
*/

void ex9_1c_practice(void)
{
	struct result
	{
		char name[21];		/*�m�W*/
		int res;			/*���Z*/
	}num1 = { "Johnson" ,90 };
	//struct order num1 = { "Johnson" ,90 };		/* �H�]�w�覡������� */

	printf("�m�W: %s\n", num1.name);
	printf("���Z: %d\n", num1.res);
}