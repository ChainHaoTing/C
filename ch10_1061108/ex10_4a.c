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
	struct student *ptr;  //定義結構指標ptr
	ptr = (struct student *)malloc(sizeof(struct student));
	getchar(); //讀掉Enter
	printf("請輸入學生姓名:");
	gets(ptr->name);	//scanf("%s", ptr->name);  //輸入姓名
	printf("請輸入學生成績:");
	scanf("%d", &ptr->score);
	printf("\n學生的姓名是 %s\n", ptr->name);
	printf("成績為 %d\n", ptr->score);
}