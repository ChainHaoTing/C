/* ex7-2a.c*/
#include <stdio.h>
#include <stdlib.h>

void ex7_2a()
{	
	/* ��J10�Ӿ�Ʀs�J�}�C�A�A�q�}�CŪ�X */
	int num[10], i;
	for(i = 0; i < 10; i++) 
	{
		printf("�п�Jnum[%d]�����: ", i);
		scanf("%d", &num[i]);   
	}
	printf("\n���}�C���U�C����:\n");
	for(i = 0; i < 10; i++)   
		printf("num[%d]=%d\n", i, num[i]);
	//system("PAUSE");
	//return 0;
}