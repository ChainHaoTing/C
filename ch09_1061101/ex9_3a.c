#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/*�Q�ε��c�}�C�s�����*/
/*
	���c�}�C��l�ȳ]�w, �ϥΤj�A�� {}, ���w�C����������, ��ƶ��H�r�� ','�j�}
	���c�}�C�O�@���ܼ�, �ҥH�ϥ�"�I"�B��l�s�����c����
	ex: classes[����].id, classes[����].name, classes[����].score
*/

void ex9_3a()
{
	struct student
	{
		int id;
		char name[10];
		double score;
	};
	/* �w�q���c�}�C,�]�w���� */
	struct student classes[5] = {
		{10811,"John",88.0},
		{10812,"Mary",82.0},
		{10813,"Bob",76.5},
		{10814,"Helen",91.0},
		{10815,"Peter",61.5} };

	printf("    �ǥͦW��p�U \n");
	printf("    --------------\n\n");
	printf("�Ǹ�\t�m�W\t����\n");
	/* �ϥ�for�j��N��ƦL�X */
	for (int i = 0; i < 5; i++) {
		printf("%d\t%-10s\t%5.1f\n"
			, classes[i].id
			, classes[i].name
			, classes[i].score);
	}
}