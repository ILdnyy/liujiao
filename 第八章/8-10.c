
#include <stdio.h>

int main(void)
{
	int ch, i,j;
	int cnt[10] = { 0 };

	while ((ch = getchar()) != EOF) {
		if (ch >= '0'&&ch <= '9')
			cnt[ch - '0']++;
	}
	printf("�����ַ����ֵĴ���\n");
	for (i = 0;i < 10;i++) {
		printf("'%d':", i);
		for (j = 0;j < cnt[i];j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
