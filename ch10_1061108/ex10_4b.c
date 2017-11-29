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

	ptr1 = (struct node *)malloc(sizeof(struct node));	//使用malloc函數配置記憶體
	printf("請輸入節點ptr1的姓名:");
	scanf("%s", ptr1->name);
	printf("請輸入節點ptr1的分數:");
	scanf("%d", &ptr1->score);

	ptr2 = (struct node *)malloc(sizeof(struct node));	//使用malloc函數配置記憶體
	printf("請輸入節點ptr1的姓名:");
	scanf("%s", ptr2->name);
	printf("請輸入節點ptr1的分數:");
	scanf("%d", &ptr2->score);

	ptr1->next = ptr2;

	ptr3 = (struct node *)malloc(sizeof(struct node));	//使用malloc函數配置記憶體
	printf("請輸入節點ptr1的姓名:");
	scanf("%s", ptr3->name);
	printf("請輸入節點ptr1的分數:");
	scanf("%d", &ptr3->score);

	ptr2->next = ptr3;
	ptr3->next = NULL;

	current = ptr1;

	printf("\n\n縺結串列的資料如下:\n");
	
	while (current != NULL) {		//判斷current指標所指向的節點是否為空節點
		printf("%10s ", current->name);		//輸出姓名
		printf("%5d\n", current->score);	//輸出分數
		current = current->next;			//將current指向下一節點
	}
}