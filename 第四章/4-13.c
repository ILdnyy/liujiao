#include <stdio.h>

int main(void)
{
	int n,i=0;
	int sum=0;
	printf("n��ֵ��");scanf_s("%d", &n);

	while (i <n ) {
		i++;
		sum += i;
	}
	printf("1��%d�ĺ�Ϊ%d\n", n,sum);
	return 0;
}


