#include <stdio.h>

#include <math.h>
unsigned rrotate(unsigned x, int n) {
	unsigned int i;
	i=x >> n;
	return i;
}

unsigned Irotate(unsigned x, int n) {
	unsigned int i;
	i=x << n;
	return i;
}

int main(void){

	unsigned int n;
	int i;

	printf("����n:");
	scanf_s("%d", &n);
	printf("��������λ��i:");
	scanf_s("%d", &i);
	printf("%u ���� %d = %u\n", n,i , Irotate(n,i));

	printf("����n:");
	scanf_s("%d", &n);
	printf("��������λ��i:");
	scanf_s("%d", &i);
	printf("%u ���� %d λ= %u\n", n, i, rrotate(n, i));
	

	return 0;
}
