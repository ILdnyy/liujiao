#include <stdio.h>

#include <math.h>

int main(void){

	unsigned int n;
	int i;

	printf("����n:");
	scanf_s("%d", &n);
	printf("��������λ��i:");
	scanf_s("%d", &i);
	printf("%u ���� %d = %u\n", n,i , n << i);
	printf("%u ����2��ָ����%d\n", n,(int) (n*pow(2,i)));

	printf("����n:");
	scanf_s("%d", &n);
	printf("��������λ��i:");
	scanf_s("%d", &i);
	printf("%u ���� %d λ= %u\n", n,i , n >> i);
	printf("%u ����2��ָ������ = %d\n", n,  (int)(n / pow(2, i)));

	return 0;
}
