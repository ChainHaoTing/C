#include"c.h"
#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>

#define BEGIN		{
#define END			}
#define ABS(n)		(n<0 ? -n : n)
#define EVEN(n)		(n%2 == 0 ? "����" : "�_��")
#define MAX(x,y)	((x>y) ? x : y)
#define MIN(x,y)	((x<y) ? x : y)

void ex7_1()
BEGIN
	int num1, num2;
	printf("�п�J��Ӽ�:");
	scanf("%d %d", &num1, &num2);
	printf("%d �M %d ���̤j��:%d\n", num1, num2, MAX(num1, num2));
	printf("%d �M %d ���̤p��:%d\n", num1, num2, MIN(num1, num2));
END