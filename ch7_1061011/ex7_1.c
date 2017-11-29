#include"c.h"
#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>

#define BEGIN		{
#define END			}
#define ABS(n)		(n<0 ? -n : n)
#define EVEN(n)		(n%2 == 0 ? "案计" : "计")
#define MAX(x,y)	((x>y) ? x : y)
#define MIN(x,y)	((x<y) ? x : y)

void ex7_1()
BEGIN
	int num1, num2;
	printf("叫块ㄢ计:");
	scanf("%d %d", &num1, &num2);
	printf("%d ㎝ %d 程:%d\n", num1, num2, MAX(num1, num2));
	printf("%d ㎝ %d 程:%d\n", num1, num2, MIN(num1, num2));
END