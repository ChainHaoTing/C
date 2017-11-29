#include <stdio.h>
#include <stdlib.h>

void ex2_4(void) 
{
	int score;
	printf("Please input a score:");
	scanf("%d", &score);
	if ((score<0) || (score>100)) /* 若成績超出0到100之間 */
		printf("input error!!\n");
	if((score>=0) && (score<50))
		printf("Fail!!\n");
	if ((score<60) && (score>49)) /* 若成績介於50到59之間 */
		printf("make up exams!!\n");
	if ((score>59) && (score<=100))
		printf("pass!!\n");

	//system("pause");
	//return 0;
}