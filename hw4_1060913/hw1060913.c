#include<stdlib.h>
#include<stdio.h>
#include"c.h"

void main()

{
	int a, e, o, i, u;
	a = e = o = i = u = 0;
	char str[20];
	printf("請輸入英文字串");
	gets(str);
	for (int k = 0; k < sizeof(str) - 1; k++) {
		switch (str[k])
		{
		case 'a':a++; break;
		case 'e':e++; break;
		case 'o':o++; break;
		case 'i':i++; break;
		case 'u':u++; break;
		default:
				break;
		}
	}
	printf("%s\n", str);
	printf("a=%d,e=%d,o=%d,i=%d,u=%d\n", a, e, o, i, u);

	system("pause");
	return 0;

}

