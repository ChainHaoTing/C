#include"c.h"
#include"stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void main()
{
	//char *str[13] = { "ad","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz"};
	char  str[13][2] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };
	
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%c ", **(str + i) + j);
			printf("%c ", *(*(str + i) + j));

			//printf("(str+%2d)+%d = %p  ", i, j, *(str + i) + j);
			//printf("**(str+%2d)+%d = %p  ", i, j, **(str + i) + j);
			//printf("sizeof(**(str+%2d)+%d)   = %d\n", i, j, sizeof(**(str + i) + j));
			//printf("\t\t\t");
			//printf(" *(*(str+%2d)+%d) = %p  ", i, j, *(*(str + i) + j));
			//printf("sizeof(*(*(str+%2d)+%d)) = %d\n", i, j, sizeof(*(*(str + i) + j)));
			//printf("*(str+%2d)+%d = %p ", i, j, *(str + i) + j);
			//printf("**(str+%2d)+%d = %p\n", i, j, **(str + i) + j);
			printf("\n");
		}
	}
	
	/*
	for (int i = 0; i < 26; i++) {
		printf("%c ", *(*str + i));

	}
	*/
	printf("\n\n");
	system("pause");
}