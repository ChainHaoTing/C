#include"c.h"
#include<stdio.h>
#include<stdlib.h>


/*�Q�ε��c�}�C�s�����*/

/*	creat() �s�W�@�����
	list()  �C�L�Ҧ�����

	- struct student classes[10]; �w�q���c�}�C�ϥΩT�w���}�C���� (���D: 10000 �ӫ���)
	- char name[10]
	- scanf("%s",classes[index].name); �o�̤����ϥ� & �������}�B��l
	  ��]�O: �}�C�W�ٴN�O�@�Ӧ�}
*/

struct student
{
	int id;
	char name[10];
	double score;
};  //�w�q�@���c�}�C, ���}�C�i�s 10 �����
struct student classes[10];
int index = 0;
void createx9_3b();
void list();

void ex9_3b()
{
	int option;
	do
	{
		printf("\n1 => create student data\n");
		printf("2 => list student data\n");
		printf("3 => quit\n");
		printf("Please enter your choice: ");
		//option = getchar();
		scanf("%d", &option);
		puts("");    //����

		switch (option)
		{
		case 1:createx9_3b(); break;
		case 2:list(); break;
		case 3:printf("Bye bye!!\n"); break;

		default:printf("Option error!!\n");break;
		}

	} while (option != 3);
}

/* �w�q create()��� */
void createx9_3b()
{
	// �j�� 10 �N��}�C�w��, �C�X���ܰT���ê�^
	if (index >= 10) {
		printf("The array is full\n");
		return;
	}
	printf("\n<< Creating student data >>\n");
	printf("Student ID: ");
	scanf("%d", &classes[index].id);
	while (getchar() != '\n')
		continue;
	printf("Student name: ");
	scanf("%s", classes[index].name);
	printf("Student score: ");
	scanf("%lf", &classes[index].score);
	index++;
}
/* �w�qlist( )��� */
void list()
{
	int i;
	printf("\n<< Listing student data >>\n");
	/* �Q��for�j��N���c�}�C������Ƥ@�@�C�X */
	for (i = 0; i < index; i++)
		printf("%-10d %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
}

