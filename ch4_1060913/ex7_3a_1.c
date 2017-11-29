#include <stdio.h>
#include <stdlib.h>

void ex7_3a_1(void)
{
	int num[2][3];
	int index1, index2;

	for (index1 = 0; index1 < 2; index1++)
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("請輸入num[%d][%d]的資料:", index1, index2);
			scanf("%d", &num[index1][index2]);
		}

	printf("\n此二維陣列的資料如下\n");
	printf("%3d:%3d:%3d\n", num[0][0],num[0][1],num[0][2]);
	printf("%3d:%3d:%3d\n", num[1][0], num[1][1], num[1][2]);

	//system("PAUSE");
	//return 0;
}