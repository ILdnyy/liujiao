#include <stdio.h>

void alert(int n)
{
	int i;
	for (i = 0;i <= n;i++)
		printf("\a");
}

int main(void) {
	int n;

	printf("����n��");scanf_s("%d", &n);
	printf("��������%d�����塣\n",n);
	alert(n);

	return 0;
}
