#include <stdio.h>
#define NUMBER 100
int main(void){
	int n;
    int i;
    int v[NUMBER];

    printf("���ݸ�����");
    scanf_s("%d",&n);

	for (i = 0; i < n; i++) {
		printf("%d�ţ�", i + 1);
		scanf_s("%d", &v[i]);
	}
	printf("{");

    for (i = 0; i < n; i++)	{
		    printf("%d,", v[i]);
     }
     printf("}\n");

     return 0;
}

