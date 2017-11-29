#include"c.h"
#include<stdio.h>
#include<stdlib.h>


/*利用結構陣列存取資料*/

/*	creat() 新增一筆資料
	list()  列印所有紀錄

	- struct student classes[10]; 定義結構陣列使用固定的陣列成員 (問題: 10000 個怎麼辦)
	- char name[10]
	- scanf("%s",classes[index].name); 這裡不須使用 & 間接取址運算子
	  原因是: 陣列名稱就是一個位址
*/

struct student
{
	int id;
	char name[10];
	double score;
};  //定義一結構陣列, 此陣列可存 10 筆資料
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
		puts("");    //跳行

		switch (option)
		{
		case 1:createx9_3b(); break;
		case 2:list(); break;
		case 3:printf("Bye bye!!\n"); break;

		default:printf("Option error!!\n");break;
		}

	} while (option != 3);
}

/* 定義 create()函數 */
void createx9_3b()
{
	// 大於 10 代表陣列已滿, 列出提示訊息並返回
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
/* 定義list( )函數 */
void list()
{
	int i;
	printf("\n<< Listing student data >>\n");
	/* 利用for迴圈將結構陣列中的資料一一列出 */
	for (i = 0; i < index; i++)
		printf("%-10d %-10s %5.1f\n", classes[i].id, classes[i].name, classes[i].score);
}

