#include <stdio.h>

unsigned set_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x |= 1 << i;
	return x;
}

unsigned reset_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x &= ~(1 << i);
	return x;
}

unsigned inverse_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x ^= 1 << i;
	return x;
}

int main(void){
	unsigned i, pos,n;

	printf("������������λ����n��\n");
	scanf_s("%u %u %u",&i ,&pos,&n);
	printf("����%dλ��%dλ��Ϊ1���ֵ%d\n",pos,pos+n-1,set_n(i, pos,n));
	printf("�ӵ�%dλ��%dλ��Ϊ0���ֵ%d\n",pos, n, reset_n(i, pos,n));
	printf("����%dλ��%dȡ�����ֵ%d",pos,n,inverse_n(i, pos,n));

	return 0;
} 
