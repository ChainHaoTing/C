#include"c.h"
#include <stdio.h>
#include <stdlib.h>

/*���c�����ܼƻP���*/

struct work
{
	char name[20]; /* �m�W */
	int hours; /* �u�@�ɼ� */
	int pay; /* ���~ */
	int total_pay; /* �`�u�� */
}service; /* �w�q���c�ܼ� */

void calculate(struct work *);

void ex9_2b(void)
{
	service.pay = 120;
	printf("�п�J�z���m�W: ");
	//gets(service.name);
	scanf("%s", service.name);

	printf("�п�J�u�@�ɼ�: ");
	scanf("%d", &service.hours);

	calculate(&service);/*�I�scalculate()��ơA�ǰeservice���c��} */
	
	printf("�z�`�@���~��O $%d\n",service.total_pay);
}

/* �w�qcalculate( )��ơA�H���c�����ܼƱ������c��} */

void calculate(struct work *ptr)
{
	ptr->total_pay = ptr->hours*ptr->pay; /* �p���`�u�� */
}