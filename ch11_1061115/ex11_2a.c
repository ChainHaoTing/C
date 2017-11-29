#include"c.h"
#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include <ctype.h>


/* isalnum 代刚じ琌计┪璣ゅダ*/
void ex11_2a()
{
	char ch;
	printf("叫块じ:");
	ch = getche();
	if (isalnum(ch)) {
		printf("\n%c琌璣ゅダ┪计\n", ch);
	}
	else
		printf("\n%cぃ琌璣ゅダ┪计\n", ch);
}