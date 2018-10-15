#include <stdio.h>

unsigned set(unsigned x, int pos){
	unsigned i = 1;
	return x | (i << pos);
}

unsigned reset(unsigned x, int pos){
	unsigned i = 1;
	return x & ~(i << pos);
}

unsigned inverse(unsigned x, int pos){
	unsigned i = 1;
	return x ^ (i << pos);
}

int main(void){
	unsigned i, pos;

	printf("������������λ����");
	scanf("%u %u",&i ,&pos);
	printf("����%dλ��Ϊ1���ֵ%d\n",pos,set(i, pos));
	printf("����%dλ��Ϊ0���ֵ%d\n",pos,reset(i, pos));
	printf("����%dλȡ�����ֵ%d",pos,inverse(i, pos));

	return 0;
} 
