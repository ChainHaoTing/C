#include"c.h"
#include<stdio.h>
#include<stdlib.h>

/* ����scanf��Ʀb��J�r�������I */
/* ex��J abc �]���Ochar�r�������@��byte�@��byte �|�Q�s�� a\n,b\n,c\n */
void ex11_1b()
{
	//gets();			//�[�Jgets��EnterŪ��
	char ch;
	for (int i = 1; i < 4; i++) {
		printf("#%d ����J��Ƭ�:", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�:%c\n\n", i, ch);

		while (getchar() != '\n')   //Ū�����O\n�����e
			continue;
	}
}