#include <stdio.h>

int main(void){

	int i,j;
	int tensu1[4][3];
	int tensu2[3][4];

	printf("������һ���������о����ֵ��\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++) {
        	scanf_s("%d", &tensu2[i][j]);
		}
	}

	printf("������һ���������о����ֵ��\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &tensu1[i][j]);
		}
	}

	for ( i= 0; j < 3; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("�˻�%d", tensu2[i][j] * tensu1[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
