#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/* ����scanf��Ʀb��J�r�������I */
/* ex��J abc �]���Ochar�r�������@��byte�@��byte �|�Q�s�� a,\n,b,\n,c,\n */
void ex11_1a()
{
	gets();			//�[�Jgets��EnterŪ��
	char ch;
	for (int i = 1; i < 4; i++) {
		printf("#%d ����J��Ƭ�:", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�:%c\n\n", i, ch);
		//gets();		//�[�Jgets��EnterŪ��
	}
}