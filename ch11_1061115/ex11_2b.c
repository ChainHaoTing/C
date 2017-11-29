#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalpha isdigit 代刚じ琌计┪璣ゅダ*/
void ex11_2b()
{
	char ch;
	printf("叫块じ:");
	ch = getche();
	if (isalpha(ch)) {
		printf("\n%c璣ゅダ\n", ch);
	}
	else if (isdigit(ch))
		printf("\n%c 计\n", ch);
	else
		printf("\n%c ぃ琌璣ゅダ┪计\n", ch);
}