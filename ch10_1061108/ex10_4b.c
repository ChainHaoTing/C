#include"c.h"
#include <stdio.h>
#include <stdlib.h>

void ex10_4b()
{
	struct node {
		char name[20];
		int score;
		struct node *next;
	};
	struct node *ptr1, *ptr2, *ptr3, *current;

	ptr1 = (struct node *)malloc(sizeof(struct node));	//�ϥ�malloc��ưt�m�O����
	printf("�п�J�`�Iptr1���m�W:");
	scanf("%s", ptr1->name);
	printf("�п�J�`�Iptr1������:");
	scanf("%d", &ptr1->score);

	ptr2 = (struct node *)malloc(sizeof(struct node));	//�ϥ�malloc��ưt�m�O����
	printf("�п�J�`�Iptr1���m�W:");
	scanf("%s", ptr2->name);
	printf("�п�J�`�Iptr1������:");
	scanf("%d", &ptr2->score);

	ptr1->next = ptr2;

	ptr3 = (struct node *)malloc(sizeof(struct node));	//�ϥ�malloc��ưt�m�O����
	printf("�п�J�`�Iptr1���m�W:");
	scanf("%s", ptr3->name);
	printf("�п�J�`�Iptr1������:");
	scanf("%d", &ptr3->score);

	ptr2->next = ptr3;
	ptr3->next = NULL;

	current = ptr1;

	printf("\n\n�൲��C����Ʀp�U:\n");
	
	while (current != NULL) {		//�P�_current���Щҫ��V���`�I�O�_���Ÿ`�I
		printf("%10s ", current->name);		//��X�m�W
		printf("%5d\n", current->score);	//��X����
		current = current->next;			//�Ncurrent���V�U�@�`�I
	}
}