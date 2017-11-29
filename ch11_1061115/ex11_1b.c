#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/* 測試scanf函數在輸入字元的缺點 */
/* ex輸入 abc 因為是char字元視為一個byte一個byte 會被編成 a\n,b\n,c\n */
void ex11_1b()
{
	//gets();			//加入gets把Enter讀掉
	char ch;
	for (int i = 1; i < 4; i++) {
		printf("#%d 的輸入資料為:", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為:%c\n\n", i, ch);

		while (getchar() != '\n')   //讀掉不是\n的內容
			continue;
	}
}