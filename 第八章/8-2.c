#include <stdio.h>

#define max(x,y) ( (x) > (y) ? (x) : (y) )
 
int main(void){
	int a = 5;
	int b = 6;
	int c = 7;
	int d = 8;

	printf("���ֵΪ��%d\n", max(max(a, b), max(c, d)));
	printf("���ֵΪ��%d\n", max(max(max(a, b),c) , d));
	return 0;
}
