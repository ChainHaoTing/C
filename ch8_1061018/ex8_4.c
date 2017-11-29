#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void ex8_4()
{
	//char *str[4] = { "Department","of","Information","Management" };
	char *str[4] = { "abc","def","ghi","jkl" };

	printf("  *str    = %p\n", *str);
	printf(" **str    = %c\n", **str);
	printf(" &**str   = %p\n\n", &**str); //a的位址

	printf(" *(str+2) = %p\n", *(str + 2));
	printf("**(str+2) = %c\n", **(str + 2));
	printf("&**(str+2)= %p\n\n", &**(str + 2)); //g的位址

	printf("  *str+2  = %p\n", *str + 2);
	printf("*(*str+2) = %c\n", *(*str + 2));
	printf("&*(*str+2)= %p\n\n", &*(*str + 2)); //c的位址

	printf("*(str+3)+2  = %p\n", *(str + 3) + 2);
	printf("**(str+3)+2 = %c\n", **(str + 3) + 2);
	printf("&**(str+3)+2= %p\n\n", &**(str + 3) + 2); //l的位址

	printf("*(str+1)+2  = %p\n", *(str + 1) + 2);
	printf("**(str+1)+2 = %c\n", **(str + 1) + 2);
	printf("&**(str+1)+2= %p\n\n", &**(str + 1) + 2); //f的位址
}