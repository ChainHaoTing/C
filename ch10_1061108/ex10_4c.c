#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert10_4c();
void list10_4c();

struct student
{	
	int id;	               /* ID號碼 */
	char name[10];	       /* 學生姓名 */
	double score;	       /* 學生分數 */
	struct student *next;  /* 指向下一個鏈結 */
};
struct student *head, *ptr;	//定義結構指標，head指向第一個鏈結

void ex10_4c()
{
	int option;
	head = (struct student *) malloc(sizeof(struct student));
	//假設鏈結串列的 head 所指向的節點不存放資料,所以配置記憶體之後, 只將 NULL 指定給 head->next 
	head -> next = NULL;    /* head指向的節點不存任何資料 */ 

	do{
		/* 使用選項讓使用者選擇新增、列印或結束 */
		printf("\n1 => 新增一節點\n");
 		printf("2 => 列印串列的所有節點\n");
		printf("3 => 結束\n");
		printf("請選擇一項目: ");
		//option = getchar( );  /* 輸入選項 */
		scanf("%d", &option);
		switch(option){	         
			case 1:	insert10_4c( );break;
	    	case 2:	list10_4c( );break;
			case 3:	printf("Bye bye!!\n\n");break;
			default: printf("Option error!!\n");
		}
	}  while(option != 3);  /* 選擇為3則跳出迴圈 */
}
/* 定義insert( )，此函數不接受任何參數，且不傳回任何值 */
/* 新增一筆資料於鏈結串列的前端 */
void insert10_4c()
{
 	/* 以malloc( )函數配置適當記憶體給 ptr 指標變數 */
	ptr = (struct student *)malloc(sizeof(struct student));
	      
	printf("\n<< Creating student data >>\n");//使用者輸入資料
	printf("Student ID <int> : ");
    scanf("%d", &ptr->id);
	printf("Student name <string> : ");
	scanf("%s", ptr->name);
	printf("Student score <double> : ");
	scanf("%lf", &ptr->score);
 
    /* 加到鏈結串列的前端的步驟 */
	ptr->next = head->next; //此ptr的next指向 NULL
	head->next = ptr;
}

/* 定義list( )，此函數不接受任何參數，且不傳回任何值 */
/* 列印資料於螢幕 */
void list10_4c()
{	
	struct student *current; 
	if (head->next == NULL)
	    printf("The linked list is empty\n");
    else
    {
	   current = head->next;       /* 將node指向head */
	   printf("\n<< Listing student data >>\n");
	 
  	   while(current != NULL)     /* 列印資料直到current為空指標 */
	   {
		  printf("%-10d %-10s %-10.2f\n", current->id, current->name, current->score);
		  current = current->next;
	   }
    }
}
