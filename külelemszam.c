#include <stdio.h>
#include <stdbool.h>

int main() {
    bool tomb[99] = { false };
    int darab = 0;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    int szam;
    do {
        if (scanf("%d", &szam) != 1) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            while (getchar() != '\n');
            continue;
        }

        if (szam >= 1 && szam <= 99) {
            if (!tomb[szam - 1]) {
                darab++;
                tomb[szam - 1] = true;
            }
        }
        else if (szam != 0) {
            printf("Hibas input, kerem adjon meg egy [1, 99] intervallumon beluli egesz szamot!\n");
        }
    } while (szam != 0);

    printf("%d db különböző szám lett megadva.\n", darab);

    printf("Ezek (növekvő sorrendben):");
    for (int i = 0; i < 99; i++) {
        if (tomb[i]) {
            printf(" %d", i + 1);
        }
    }
    printf("\n");

    return 0;
}
