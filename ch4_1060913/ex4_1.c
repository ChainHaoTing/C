#include"c.h"
#include<stdio.h>
#include<stdlib.h>

ex4_1(void)
{
	int n, j = 1, sum = 0;        /* �]�w�j���� */

	do
	{
		printf("�п�J�@��n(>0):");
		scanf("%d", &n);
	} while (n<=0);        /* ��n<=0�ɭ��ƿ�Jn���� */

	do
	{
		sum += j;
		j++;
	} while (j<=n);        /* ��i<=n�ɰ���֥[���ʧ@ */

	printf("1+2+...+%d=%d\n",n,sum);

}