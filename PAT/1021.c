#include<stdio.h>
#include<string.h>
int main() {
	char N[1001];
	int count[11] = { 0 },i;
	gets(N);
	int n=strlen(N);
	for (i = 0;i < n;i++) {
		count[N[i] - '0']++;
	}
	for (i = 0;i < 10;i++) {
		if (count[i] != 0) {
			printf("%d:%d\n", i, count[i]);
		}
	}
	return 0;
}