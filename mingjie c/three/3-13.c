#include <stdio.h>

int main(void)
{	
	int month;

	printf("�������·ݣ�");
	scanf_s("%d", &month);

    switch (month)	
{	 case 3:case 4:case 5: printf("%d���Ǵ��졣\n", month); break;
     case 6:case 7:case 8: printf("%d�������졣\n", month); break;		
     case 9:case 10:case 11: printf("%d�������졣\n", month); break;		
	 case 12:case 1:case 2: printf("%d���Ƕ��졣\n", month); break;	
}	

    return 0;
 }

