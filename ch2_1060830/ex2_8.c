#include <stdio.h>
#include <stdlib.h>
void ex2_8(void)
{
	int a, b;
	char oper;


	printf("Please input the expression(ex:3+2):"); /* 輸入運算式 */
	scanf(" %d %c %d", &a, &oper, &b);


	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b); /* 印出a+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b); /* 印出a-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b); /* 印出a*b */
		break;
	case '/':
		printf("%d/%d=%d\n", a, b, a / b); /* 印出a%b */
		break;
	default:
		printf("input error!!\n"); /* 印出字串 */
		break;
	}

	//system("pause");
	//return 0;
}