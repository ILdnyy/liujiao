#include <stdio.h>

int combination(int n,int r) {
	int y;
	if (r < n && r>1) {
		y = combination(n - 1, r - 1) + combination(n - 1, r);
	}
	else if (r == n || r == 0) {
		y = 1;
	}
	else if (r == n) {
		y = n;
	}
	return y;
}

int main(void) {
	int n,r;
	printf("n��");
	scanf_s("%d", &n);
	printf("r��");
	scanf_s("%d", &r);
	printf("��%d��ȡ��%d������%d��\n",n,r, combination(n,r));
	
	return 0;
}
