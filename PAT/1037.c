#include <stdio.h>

int main() {
    int Galleon, Sickle, Knut, P, A, change; 
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    P = (Galleon * 17 + Sickle) * 29 + Knut;
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    A = (Galleon * 17 + Sickle) * 29 + Knut; 
    change = A - P; 
    if (change < 0) {
        printf("-");
        change = -change;
    }
    printf("%d.%d.%d\n", change / 29 / 17, change / 29 % 17, change % 29);
    
    return 0;
}