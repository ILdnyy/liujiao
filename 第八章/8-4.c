#include <stdio.h>
#define NUMBER 5 
void bsort(int a[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0 ; j < n - i - 1 ; j ++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int i;
	int height[NUMBER];
	printf("������%d�˵���ߡ�\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�ţ�", i + 1);
		scanf_s("%d", &height[i]);
	}

	bsort(height, NUMBER);
	for (i = 0; i < NUMBER; i++)
		printf("%2d �ţ�%d\n", i + 1, height[i]);

	return 0;
}
