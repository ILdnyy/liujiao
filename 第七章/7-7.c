#include <stdio.h>


int main(void){
	float a;
	double b;
	long double c;

	puts("����������������������");
	scanf_s("%f %lf %Lf", &a, &b,&c);
	printf("float�ͣ�%f\ndouble�ͣ�%f\nlong double�ͣ�%Lf", a, b, c);

	return 0;

}
