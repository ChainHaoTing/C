#include"c.h"
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void ex10_4a()
{
	struct student
	{
		char name[20];
		int score;
	};
	struct student *ptr;  //�w�q���c����ptr
	ptr = (struct student *)malloc(sizeof(struct student));
	getchar(); //Ū��Enter
	printf("�п�J�ǥͩm�W:");
	gets(ptr->name);	//scanf("%s", ptr->name);  //��J�m�W
	printf("�п�J�ǥͦ��Z:");
	scanf("%d", &ptr->score);
	printf("\n�ǥͪ��m�W�O %s\n", ptr->name);
	printf("���Z�� %d\n", ptr->score);
}