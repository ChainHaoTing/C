#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_1practice()
{
	char x = 'a';//�w�q�ܼ� x
	char *p1 = &x;//�w�q�����ܼ�
	//int *p1 = &x;//�w�q�����ܼ�
	char **p2 = &p1;//�w�q���������ܼ�
	//int **p2 = &p1;//�w�q���������ܼ�

	printf("&x=%p, x=%c\n", &x, x);/* �L�Xx�ܼƪ���}�P�� */
	printf("&p1=%p\, p1=%p\n", &p1, p1);/* �L�Xp1�����ܼƦ�} */
	printf("&p2=%p\, p2=%p\n", &p2, p2);/* �L�Xp2�����ܼƦ�} */

	printf("*p1=%c\, **p2=%c\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */

	printf("\nx��byte:%d\n", sizeof(x));
	printf("*p1��%dbytes, **p2��%dbytes\n", sizeof(*p1), sizeof(**p2));
	printf("p1��%dbytes, p2��%dbytes\n", sizeof(p1), sizeof(p2));

	printf("*p1=%c\, **p2=%c\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */
	//printf("*p1=%d\, **p2=%d\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */
}