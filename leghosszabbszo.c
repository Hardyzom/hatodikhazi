#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
    char word[SIZE + 1];
    int leghosszabbszo = 0;
    int szavakszama = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) {
        fgets(word, SIZE + 1, stdin);

        if (word[0] == '*') {
            break;
        }

        int hossz = strlen(word) - 1;
        if (hossz > leghosszabbszo) {
            leghosszabbszo = hossz;
        }

        szavakszama++;
    }

    printf("A leghosszabb szo hossza: %d karakter.\n", leghosszabbszo);
    printf("A beolvasott szavak szama: %d\n", szavakszama);

    return 0;
}