#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Hány db számot szeretnél bevinni?");
    scanf("%d", &n);

    int tomb[n];
    int absz_tomb[n];

    printf("Kerem adja meg a %d db szamot:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tomb[i]);
        absz_tomb[i] = abs(tomb[i]);
    }

    printf("Az abszolut ertekek tombje: ");
    for (int i = 0; i < n; i++) {
        printf("%d", absz_tomb[i]);
        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    printf("Az eredeti tomb tartalma: ");
    for (int i = 0; i < n; i++) {
        printf("%d", tomb[i]);
        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }

    return 0;
}