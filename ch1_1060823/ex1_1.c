#include <stdio.h>
#include <stdlib.h>

void ex1_1(void)
{
	short sum, s = 32767;     /* �ŧi�u����ܼ�sum�Ps */

	printf("s=%d\n", s);
	sum = s + 1;
	printf("s+1= %d\n", sum); /* �C�L�Xsum����*/
	sum = s + 2;
	printf("s+2= %d\n", sum); /* �C�L�Xsum����*/

	//system("pause");
	//return 0;
}