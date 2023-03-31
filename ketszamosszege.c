#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Hiba! Két paramétert (számot) kell megadni.\n");
        return 1;
    }


    int a = atoi(argv[1]);
    int b = atoi(argv[2]);


    int osszeg = a + b;
    printf("%d\n", osszeg);

    return 0;
}
