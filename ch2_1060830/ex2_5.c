#include <stdio.h>
#include <stdlib.h>

void ex2_5(void) 
{
	int score;
	printf(" 請輸入成績: ");
	scanf("%d", &score);

	if (score<60) /* 如果score<60 */
	{
		if (score >= 50) /* 如果score>=50 */
			printf(" make up exams \n");
		else
			printf("Fail\n");
	}
	else
		printf("Pass\n");

}