#include"stdafx.h"
#include"c.h"
#include<stdio.h>
#include<stdlib.h>

int array[5]; /* �w�q�����ܼ�array�}�C*/

/* �w�qinput( ) */
void input6_7()
{
	int index;/*�w�qinput( )���ϰ��ܼ�*/
	for (index = 0; index < 5; index++)
	{
		printf("�п�J #%d ���: ",index + 1);
		scanf("%d", &array[index]);
		/* �ϥΥ����ܼư���J */
	}
}


/* �w�qoutput( )*/
void output6_7()
{
	int index;/*�w�qoutput( )���ϰ��ܼ�*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* �ϥΥ����ܼư���X */
		printf("array[%d] is %d\n", index,array[index]);
}

void ex6_7()
{
	printf("���{���b���ե����ܼ�\n");
	input6_7();
	output6_7();
}

