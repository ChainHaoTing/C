#include"c.h"
#include<stdio.h>
#include<stdlib.h>


void ex9_1b_practice(void)
{
	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���� */
	struct square
	{
		double length, area;	 /* �T���Ϊ����P�� */
		//double area;		 /* �T���Ϊ����n */
	};
	struct square tri;

	printf("�п�J����Ϊ���: ");
	scanf("%lf", &tri.length);		/* �Htri.length�s�����c����length */

	tri.area = tri.length * tri.length;		/*�Htri.area �s�����c����area*/
	printf("����Ϊ����n��: %.2f\n", tri.area);
}