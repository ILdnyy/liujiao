#include <stdio.h>

void put_stringr(const char s[]) {
	int i=0;
	while (s[i] != '\0'){
		i++;
	}
	while (s[i]) {
		putchar(s[i]);
		i--;
	}
	return;
}
int main(void){
	char s[] = "ABC";

	printf("���������");
	put_stringr(s);
	printf("��\n");
	printf("%s", s);
	return 0;
}
